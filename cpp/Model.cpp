#include "../include/Model.h"

Model::Model(string fname)
{
    this->load(fname);
}
vector<string> Model::split(const string &str, const string &delim)
{
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do
    {
        pos = str.find(delim, prev);
        if (pos == string::npos)
            pos = str.length();
        string token = str.substr(prev, pos - prev);
        if (!token.empty())
            tokens.push_back(token);
        prev = pos + delim.length();
    } while (pos < str.length() && prev < str.length());
    return tokens;
}
void Model::info() const
{
    cout << "Archivo : " << this->name << endl;
    cout << "Vertices: " << this->vertices << endl;
    cout << "Caras: " << this->faces.size << endl;
}