#ifndef _sun_nio_cs_Surrogate$Generator_h_
#define _sun_nio_cs_Surrogate$Generator_h_
//$ class sun.nio.cs.Surrogate$Generator
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class CharBuffer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class CoderResult;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $export Surrogate$Generator : public ::java::lang::Object {
	$class(Surrogate$Generator, 0, ::java::lang::Object)
public:
	Surrogate$Generator();
	void init$();
	virtual ::java::nio::charset::CoderResult* error();
	virtual int32_t generate(int32_t uc, int32_t len, ::java::nio::CharBuffer* dst);
	virtual int32_t generate(int32_t uc, int32_t len, $chars* da, int32_t dp, int32_t dl);
	static bool $assertionsDisabled;
	::java::nio::charset::CoderResult* error$ = nullptr;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_Surrogate$Generator_h_