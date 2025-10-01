#ifndef _sun_security_provider_MoreDrbgParameters_h_
#define _sun_security_provider_MoreDrbgParameters_h_
//$ class sun.security.provider.MoreDrbgParameters
//$ extends java.security.SecureRandomParameters
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/security/SecureRandomParameters.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace security {
		class DrbgParameters$Capability;
		class DrbgParameters$Instantiation;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class EntropySource;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $import MoreDrbgParameters : public ::java::security::SecureRandomParameters, public ::java::io::Serializable {
	$class(MoreDrbgParameters, $NO_CLASS_INIT, ::java::security::SecureRandomParameters, ::java::io::Serializable)
public:
	MoreDrbgParameters();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::security::provider::EntropySource* es, $String* mech, $String* algorithm, $bytes* nonce, bool usedf, ::java::security::DrbgParameters$Instantiation* config);
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)9;
	::sun::security::provider::EntropySource* es = nullptr;
	$String* mech = nullptr;
	$String* algorithm = nullptr;
	bool usedf = false;
	int32_t strength = 0;
	::java::security::DrbgParameters$Capability* capability = nullptr;
	$bytes* nonce = nullptr;
	$bytes* personalizationString = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_MoreDrbgParameters_h_