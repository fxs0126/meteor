#include "argument.h"

Argument::Argument(const char *name)
{
    _name  = name;
    _id    = 0;
    _count = 0;
}

UInt8 Argument::getIdentifier() const
{
    return _id;
}

UInt Argument::getCount() const
{
    return _count;
}

const String & Argument::getName() const
{
    return _name;
}

const String & Argument::getDescription() const
{
    return _description;
}

const String & Argument::getValue() const
{
    return _value;
}

void Argument::setIdentifier(UInt8 id)
{
    _id = id;
}

void Argument::setName(const char *name)
{
    _name = name;
}

void Argument::setDescription(const char *description)
{
    _description = description;
}

void Argument::setValue(const char *value)
{
    _value = value;
}

void Argument::setCount(UInt count)
{
    _count = count;
}

bool Argument::operator == (const Argument & arg) const
{
    return arg._id == _id;
}

bool Argument::operator != (const Argument & arg) const
{
    return arg._id != _id;
}

bool Argument::operator < (const Argument & arg) const 
{
   return _id < arg._id;	
}
