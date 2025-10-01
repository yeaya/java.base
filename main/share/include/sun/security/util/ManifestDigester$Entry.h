#ifndef _sun_security_util_ManifestDigester$Entry_h_
#define _sun_security_util_ManifestDigester$Entry_h_
//$ class sun.security.util.ManifestDigester$Entry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace security {
		class MessageDigest;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class ManifestDigester$Section;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import ManifestDigester$Entry : public ::java::lang::Object {
	$class(ManifestDigester$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ManifestDigester$Entry();
	void init$();
	::sun::security::util::ManifestDigester$Entry* addSection(::sun::security::util::ManifestDigester$Section* sec);
	virtual $bytes* digest(::java::security::MessageDigest* md);
	virtual $bytes* digestWorkaround(::java::security::MessageDigest* md);
	virtual bool isProperlyDelimited();
	virtual void reproduceRaw(::java::io::OutputStream* out);
	::java::util::List* sections = nullptr;
	bool oldStyle = false;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_ManifestDigester$Entry_h_