#ifndef _sun_nio_cs_Surrogate$Parser_h_
#define _sun_nio_cs_Surrogate$Parser_h_
//$ class sun.nio.cs.Surrogate$Parser
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

class $export Surrogate$Parser : public ::java::lang::Object {
	$class(Surrogate$Parser, 0, ::java::lang::Object)
public:
	Surrogate$Parser();
	void init$();
	virtual int32_t character();
	virtual ::java::nio::charset::CoderResult* error();
	virtual int32_t increment();
	virtual bool isPair();
	virtual int32_t parse(char16_t c, ::java::nio::CharBuffer* in);
	virtual int32_t parse(char16_t c, $chars* ia, int32_t ip, int32_t il);
	virtual ::java::nio::charset::CoderResult* unmappableResult();
	static bool $assertionsDisabled;
	int32_t character$ = 0;
	::java::nio::charset::CoderResult* error$ = nullptr;
	bool isPair$ = false;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_Surrogate$Parser_h_