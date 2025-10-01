#ifndef _MetafactoryDescriptorTest$ConversionTable_h_
#define _MetafactoryDescriptorTest$ConversionTable_h_
//$ class MetafactoryDescriptorTest$ConversionTable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

class MetafactoryDescriptorTest$ConversionTable : public ::java::lang::Object {
	$class(MetafactoryDescriptorTest$ConversionTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MetafactoryDescriptorTest$ConversionTable();
	void init$();
	virtual bool contains($Class* from, $Class* to);
	static ::java::util::Set* lambda$put$0($Class* f);
	virtual void put($Class* from, $Class* to);
	::java::util::Map* pairs = nullptr;
};

#endif // _MetafactoryDescriptorTest$ConversionTable_h_