// in error handling, making an out of range exception

double& Vector::operator[](int i)
{
    if(i<0 || size()<=i)
        throw out_of_range("Vector::operator[]"};
    return elem[i];
}
