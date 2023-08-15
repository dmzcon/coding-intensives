#!/usr/bin/perl -w
use strict;

# WELCOME TO YOUR EASY SOFT START IN PERL LANGUAGE !!!
# THANKS TO DMZCON-2023 (www.dmzcon.com)
# Don't forget to add the 'executable' permission to this file:
#  chmod a+x perl-program-001.pl
#  ./perl-program-001.pl - use it to launch the program

print "Hello World\n";

my $i = 1;
print "See the difference:\n";
print "i=$i\n";
print 'i=$i\n';

my $string1 = "Hello";
my $string2 = " World";

my $stringsum1 = $string1.$string2;
my $stringsum2 = "$string1$string2";

print "$stringsum1  =  $stringsum2\n";

my $somefilepath = "/etc/passwd";
open(MYFILE, "< $somefilepath");
my $filecontent = join("",<MYFILE>);
close(MYFILE);

print "$filecontent\n";

exit(0);
