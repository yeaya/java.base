#ifndef _Bug8209047_h_
#define _Bug8209047_h_
//$ class Bug8209047
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Set;
	}
}

class $export Bug8209047 : public ::java::lang::Object {
	$class(Bug8209047, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Bug8209047();
	void init$();
	static void lambda$main$0(::java::util::Locale* locale, ::java::lang::Integer* style);
	static void lambda$main$1(::java::util::Set* styles, ::java::util::Locale* locale);
	static void main($StringArray* args);
};

#endif // _Bug8209047_h_