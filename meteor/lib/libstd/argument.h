
#ifndef _LIBSTD_ARGUMENT_H_
#define _LIBSTD_ARGUMENT_H_

#include "types.h"

class Argument
{
	public:
		Argument(const char* name);
		UInt8 getIdentifier() const;
		const String& getName() const;
		const String& getDescription() const;
		const String& getValue() const;
		UInt 	      getCount() const;
		void setIdentifier(UInt8 id);
		void setName(const char* name);
		void setDescription(const char* desc);
		void setValue(const char* value);
		void setCount(UInt count);
		bool operator == (const Argument& arg) const;
		bool operator != (const Argument& arg) const;
		bool operator < (const Argument& arg) const;

	protected:
	private:
		UInt8 _id;
		String _name;
		String _description;
		String _value;
		UInt   _count;
}
;

#endif

