#ifndef _javax_security_auth_x500_X500Principal_h_
#define _javax_security_auth_x500_X500Principal_h_
//$ class javax.security.auth.x500.X500Principal
//$ extends java.security.Principal
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/security/Principal.h>

#pragma push_macro("CANONICAL")
#undef CANONICAL
#pragma push_macro("RFC2253")
#undef RFC2253
#pragma push_macro("RFC1779")
#undef RFC1779

namespace java {
	namespace io {
		class InputStream;
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class X500Name;
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {

class $export X500Principal : public ::java::security::Principal, public ::java::io::Serializable {
	$class(X500Principal, 0, ::java::security::Principal, ::java::io::Serializable)
public:
	X500Principal();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::sun::security::x509::X500Name* x500Name);
	void init$($String* name);
	void init$($String* name, ::java::util::Map* keywordMap);
	void init$($bytes* name);
	void init$(::java::io::InputStream* is);
	virtual bool equals(Object$* o) override;
	$bytes* getEncoded();
	virtual $String* getName() override;
	$String* getName($String* format);
	$String* getName($String* format, ::java::util::Map* oidMap);
	virtual int32_t hashCode() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0xF90DFF3C88B877C7;
	static $String* RFC1779;
	static $String* RFC2253;
	static $String* CANONICAL;
	::sun::security::x509::X500Name* thisX500Name = nullptr;
};

			} // x500
		} // auth
	} // security
} // javax

#pragma pop_macro("CANONICAL")
#pragma pop_macro("RFC2253")
#pragma pop_macro("RFC1779")

#endif // _javax_security_auth_x500_X500Principal_h_