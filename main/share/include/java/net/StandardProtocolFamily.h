#ifndef _java_net_StandardProtocolFamily_h_
#define _java_net_StandardProtocolFamily_h_
//$ class java.net.StandardProtocolFamily
//$ extends java.lang.Enum
//$ implements java.net.ProtocolFamily

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/net/ProtocolFamily.h>

#pragma push_macro("INET")
#undef INET
#pragma push_macro("INET6")
#undef INET6
#pragma push_macro("UNIX")
#undef UNIX

namespace java {
	namespace net {

class $import StandardProtocolFamily : public ::java::lang::Enum, public ::java::net::ProtocolFamily {
	$class(StandardProtocolFamily, 0, ::java::lang::Enum, ::java::net::ProtocolFamily)
public:
	StandardProtocolFamily();
	static $Array<::java::net::StandardProtocolFamily>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* name() override;
	virtual $String* toString() override;
	static ::java::net::StandardProtocolFamily* valueOf($String* name);
	static $Array<::java::net::StandardProtocolFamily>* values();
	static ::java::net::StandardProtocolFamily* INET;
	static ::java::net::StandardProtocolFamily* INET6;
	static ::java::net::StandardProtocolFamily* UNIX;
	static $Array<::java::net::StandardProtocolFamily>* $VALUES;
};

	} // net
} // java

#pragma pop_macro("INET")
#pragma pop_macro("INET6")
#pragma pop_macro("UNIX")

#endif // _java_net_StandardProtocolFamily_h_