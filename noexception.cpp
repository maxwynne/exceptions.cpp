void user(int sz) noexcept
{
      Vector v(sz);
      iota(&v[0],&v[sz],1); // fill v with 1,2,3,4
      // ...
      terminate() // if user() still throws, terminate program
}
