void f(Vector& v)
{
    // ...
    try { // exceptions here are handled by the handler defined below

          v[v.size()] = 7; // if user attempts to access beyond the end of v
    }
    catch (out_of_range) { // prompt out of range error
        // ... handle range error ...
    }
    // ...
}
