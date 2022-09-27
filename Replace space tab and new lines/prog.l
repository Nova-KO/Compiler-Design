%%
""* {printf("");}
"\t" {printf("");}
"\n" {printf("");}
%%
  int main()
{
  extern FILE *yyin;
  yyin=fopen("nw","e\r");
  yylex();
}
  int yywrap()
  {
    return1;
  }
