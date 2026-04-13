int String::Find(const String& str) const
{
    int i, j;
    if ((!m_str) || (!str.m_str))
    {
        return -1;
    }
    for (i = 0; m_str[i]; ++i)
    {
        for (j = 0; m_str[i + j] && str.m_str[j] &&(m_str[i + j] == str.m_str[j]); ++j);
        if (!str.m_str[j])
            return i;
    }
    return -1;
}
