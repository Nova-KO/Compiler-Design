%%
[0-9]+ {printf("+ve no");}
-[0-9]+ {printf("+ve no");}
%%
int main()
{
yylex();
}
int yywrap()
{
return 1;
}
