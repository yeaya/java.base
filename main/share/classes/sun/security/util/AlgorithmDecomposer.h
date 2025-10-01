#ifndef _sun_security_util_AlgorithmDecomposer_h_
#define _sun_security_util_AlgorithmDecomposer_h_
//$ class sun.security.util.AlgorithmDecomposer
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PATTERN")
#undef PATTERN

namespace java {
	namespace util {
		class Collection;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export AlgorithmDecomposer : public ::java::lang::Object {
	$class(AlgorithmDecomposer, 0, ::java::lang::Object)
public:
	AlgorithmDecomposer();
	void init$();
	virtual ::java::util::Set* decompose($String* algorithm);
	static ::java::util::Set* decomposeImpl($String* algorithm);
	static ::java::util::Set* decomposeOneHash($String* algorithm);
	static ::java::util::Collection* getAliases($String* algorithm);
	static void hasLoop(::java::util::Set* elements, $String* find, $String* replace);
	static $String* hashName($String* algorithm);
	static ::java::util::regex::Pattern* PATTERN;
};

		} // util
	} // security
} // sun

#pragma pop_macro("PATTERN")

#endif // _sun_security_util_AlgorithmDecomposer_h_