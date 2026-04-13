void String::Insert(int index_pos,const String& str)
{
    assert((index_pos >= 0) && (index_pos <= m_iLen));
    int iNewLen = m_iLen + str.m_iLen;
    char *pStr = new char[iNewLen + 1];

    if (m_str)
        strncpy(pStr, m_str, index_pos);

    if (str.m_str)
        strcpy(pStr + index_pos, str.m_str);

    if (m_str)
    {
        strcpy(pStr + index_pos + str.m_iLen, m_str + index_pos);
        delete[] m_str;
    }

    m_str = pStr;
    m_iLen = iNewLen;
}
