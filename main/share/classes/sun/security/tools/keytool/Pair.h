#ifndef _sun_security_tools_keytool_Pair_h_
#define _sun_security_tools_keytool_Pair_h_
//$ class sun.security.tools.keytool.Pair
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

class Pair : public ::java::lang::Object {
	$class(Pair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Pair();
	void init$(Object$* fst, Object$* snd);
	virtual bool equals(Object$* other) override;
	virtual int32_t hashCode() override;
	static ::sun::security::tools::keytool::Pair* of(Object$* a, Object$* b);
	virtual $String* toString() override;
	$Object* fst = nullptr;
	$Object* snd = nullptr;
};

			} // keytool
		} // tools
	} // security
} // sun

#endif // _sun_security_tools_keytool_Pair_h_