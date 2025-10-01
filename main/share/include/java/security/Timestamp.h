#ifndef _java_security_Timestamp_h_
#define _java_security_Timestamp_h_
//$ class java.security.Timestamp
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertPath;
		}
	}
}
namespace java {
	namespace util {
		class Date;
	}
}

namespace java {
	namespace security {

class $import Timestamp : public ::java::io::Serializable {
	$class(Timestamp, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	Timestamp();
	void init$(::java::util::Date* timestamp, ::java::security::cert::CertPath* signerCertPath);
	virtual bool equals(Object$* obj) override;
	::java::security::cert::CertPath* getSignerCertPath();
	::java::util::Date* getTimestamp();
	virtual int32_t hashCode() override;
	void readObject(::java::io::ObjectInputStream* ois);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xB3A28A527BF2FD62;
	::java::util::Date* timestamp = nullptr;
	::java::security::cert::CertPath* signerCertPath = nullptr;
	int32_t myhash = 0;
};

	} // security
} // java

#endif // _java_security_Timestamp_h_