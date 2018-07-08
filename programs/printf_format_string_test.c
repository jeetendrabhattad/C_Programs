int
main ()
{
  char p[] = "%d\n";
  p[1] = 'c';
  printf (p, 65);
  return 0;
}
