#ifndef _InheritedMethods$Foo_h_
#define _InheritedMethods$Foo_h_
//$ interface InheritedMethods$Foo
//$ extends java.util.List

#include <java/util/List.h>

class $export InheritedMethods$Foo : public ::java::util::List {
	$interface(InheritedMethods$Foo, $NO_CLASS_INIT, ::java::util::List)
public:
	using ::java::util::List::toArray;
};

#endif // _InheritedMethods$Foo_h_