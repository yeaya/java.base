#ifndef _sun_net_ftp_FtpDirEntry_h_
#define _sun_net_ftp_FtpDirEntry_h_
//$ class sun.net.ftp.FtpDirEntry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Date;
		class HashMap;
	}
}
namespace sun {
	namespace net {
		namespace ftp {
			class FtpDirEntry$Permission;
			class FtpDirEntry$Type;
		}
	}
}

namespace sun {
	namespace net {
		namespace ftp {

class FtpDirEntry : public ::java::lang::Object {
	$class(FtpDirEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FtpDirEntry();
	void init$();
	void init$($String* name);
	virtual ::sun::net::ftp::FtpDirEntry* addFact($String* fact, $String* value);
	virtual bool canExexcute(::sun::net::ftp::FtpDirEntry$Permission* p);
	virtual bool canRead(::sun::net::ftp::FtpDirEntry$Permission* p);
	virtual bool canWrite(::sun::net::ftp::FtpDirEntry$Permission* p);
	virtual ::java::util::Date* getCreated();
	virtual $String* getFact($String* fact);
	virtual $String* getGroup();
	virtual ::java::util::Date* getLastModified();
	virtual $String* getName();
	virtual int64_t getSize();
	virtual ::sun::net::ftp::FtpDirEntry$Type* getType();
	virtual $String* getUser();
	virtual ::sun::net::ftp::FtpDirEntry* setCreated(::java::util::Date* created);
	virtual ::sun::net::ftp::FtpDirEntry* setGroup($String* group);
	virtual ::sun::net::ftp::FtpDirEntry* setLastModified(::java::util::Date* lastModified);
	virtual ::sun::net::ftp::FtpDirEntry* setPermissions($Array<bool, 2>* permissions);
	virtual ::sun::net::ftp::FtpDirEntry* setSize(int64_t size);
	virtual ::sun::net::ftp::FtpDirEntry* setType(::sun::net::ftp::FtpDirEntry$Type* type);
	virtual ::sun::net::ftp::FtpDirEntry* setUser($String* user);
	virtual $String* toString() override;
	$String* name = nullptr;
	$String* user = nullptr;
	$String* group = nullptr;
	int64_t size = 0;
	::java::util::Date* created = nullptr;
	::java::util::Date* lastModified = nullptr;
	::sun::net::ftp::FtpDirEntry$Type* type = nullptr;
	$Array<bool, 2>* permissions = nullptr;
	::java::util::HashMap* facts = nullptr;
};

		} // ftp
	} // net
} // sun

#endif // _sun_net_ftp_FtpDirEntry_h_