#include "BookNode.h"
#include <string>


BookNode::BookNode()
{
    m_BookId = "\n";
}
std::string BookNode::getterBookid()
{
    return m_BookId;
}
