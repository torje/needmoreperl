needmoreperl
============

a major fault with C is the lack of perl like syntax, who does not love this:

open( my $fh, "<", "input.txt") or die "unable to open file";

well, now you can, almost: 
```
FILE * file = fopen( filename, "r");
file || die("uops, file opening failed");
```
and small annoyances can be fixed with a few macro defines, making this legal. 
```
unless( a ) {
	doStuff();
}
```
