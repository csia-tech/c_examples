char * readLine(void);

char * readLine(void) // returns a char & takes no arguments
{
    char * line = malloc(100), * linep = line;// allocates 100 characters to line at first element & assigns a pointer of lines first element to lineps first element
    size_t lenmax = 100, len = lenmax;// define a size variable to 100 & make len a pointer to lenmax
    int c;// declare an integer 
    if(line == NULL)//memory allocation error
        return NULL;

    for(;;) 
    {
        c = fgetc(stdin);//get first character of input
        if(c == EOF)//if it is end of field, aka enter 
            break;// exit loop
        if(--len == 0)//check to see if we are at the end of our allocated amount of memory 
	{   
		len = lenmax;//reset len
            	char * linen = realloc(linep, lenmax *= 2);// declare character variable linen and reallocate memory starting at address of linep (2x lenmax)
            	if(linen == NULL) // memory allocation error
		{
                	free(linep);// free original allocated memory
                	return NULL;
            	}
            	line = linen + (line - linep);//make line point at linen (cycling through memory of linen
            	linep = linen;// make linep point to linen ???
        }
        if((*line++ = c) == '\n')// check for end of line
            break;
    }
    *line = '\0';// place null char at end of text
    return linep;// return point to retrieved line
}
