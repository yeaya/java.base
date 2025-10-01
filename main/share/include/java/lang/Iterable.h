#ifndef _java_lang_Iterable_h_
#define _java_lang_Iterable_h_
//$ interface java.lang.Iterable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Iterator;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace lang {

class $import Iterable : public ::java::lang::Object {
	$interface(Iterable, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void forEach(::java::util::function::Consumer* action);
	virtual ::java::util::Iterator* iterator() {return nullptr;}
	virtual ::java::util::Spliterator* spliterator();
};

	} // lang
} // java

#endif // _java_lang_Iterable_h_