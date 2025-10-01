#ifndef _sun_security_provider_PolicyParser_h_
#define _sun_security_provider_PolicyParser_h_
//$ class sun.security.provider.PolicyParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintWriter;
		class Reader;
		class StreamTokenizer;
		class Writer;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Enumeration;
		class Map;
		class Vector;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class PolicyParser$DomainEntry;
			class PolicyParser$GrantEntry;
			class PolicyParser$PermissionEntry;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $export PolicyParser : public ::java::lang::Object {
	$class(PolicyParser, 0, ::java::lang::Object)
public:
	PolicyParser();
	void init$();
	void init$(bool expandProp);
	virtual void add(::sun::security::provider::PolicyParser$GrantEntry* ge);
	$String* expand($String* value);
	$String* expand($String* value, bool encodeURL);
	virtual ::java::util::Collection* getDomainEntries();
	virtual $String* getKeyStoreProvider();
	virtual $String* getKeyStoreType();
	virtual $String* getKeyStoreUrl();
	virtual $String* getStorePassURL();
	virtual ::java::util::Enumeration* grantElements();
	static void main($StringArray* arg);
	$String* match($String* expect);
	::sun::security::provider::PolicyParser$DomainEntry* parseDomainEntry();
	::sun::security::provider::PolicyParser$GrantEntry* parseGrantEntry();
	void parseKeyStoreEntry();
	::sun::security::provider::PolicyParser$PermissionEntry* parsePermissionEntry();
	::java::util::Map* parseProperties($String* terminator);
	void parseStorePassURL();
	bool peek($String* expect);
	bool peekAndMatch($String* expect);
	virtual void read(::java::io::Reader* policy);
	virtual bool remove(::sun::security::provider::PolicyParser$GrantEntry* ge);
	virtual void replace(::sun::security::provider::PolicyParser$GrantEntry* origGe, ::sun::security::provider::PolicyParser$GrantEntry* newGe);
	virtual void setKeyStoreProvider($String* provider);
	virtual void setKeyStoreType($String* type);
	virtual void setKeyStoreUrl($String* url);
	virtual void setStorePassURL($String* storePassURL);
	void skipEntry();
	virtual void write(::java::io::Writer* policy);
	void writeKeyStoreEntry(::java::io::PrintWriter* out);
	void writeStorePassURL(::java::io::PrintWriter* out);
	::java::util::Vector* grantEntries = nullptr;
	::java::util::Map* domainEntries = nullptr;
	static ::sun::security::util::Debug* debug;
	::java::io::StreamTokenizer* st = nullptr;
	int32_t lookahead = 0;
	bool expandProp = false;
	$String* keyStoreUrlString = nullptr;
	$String* keyStoreType = nullptr;
	$String* keyStoreProvider = nullptr;
	$String* storePassURL = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyParser_h_