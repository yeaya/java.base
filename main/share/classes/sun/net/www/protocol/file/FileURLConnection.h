#ifndef _sun_net_www_protocol_file_FileURLConnection_h_
#define _sun_net_www_protocol_file_FileURLConnection_h_
//$ class sun.net.www.protocol.file.FileURLConnection
//$ extends sun.net.www.URLConnection

#include <sun/net/www/URLConnection.h>

#pragma push_macro("CONTENT_LENGTH")
#undef CONTENT_LENGTH
#pragma push_macro("CONTENT_TYPE")
#undef CONTENT_TYPE
#pragma push_macro("LAST_MODIFIED")
#undef LAST_MODIFIED
#pragma push_macro("TEXT_PLAIN")
#undef TEXT_PLAIN

namespace java {
	namespace io {
		class File;
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace sun {
	namespace net {
		namespace www {
			class MessageHeader;
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace file {

class FileURLConnection : public ::sun::net::www::URLConnection {
	$class(FileURLConnection, 0, ::sun::net::www::URLConnection)
public:
	FileURLConnection();
	void init$(::java::net::URL* u, ::java::io::File* file);
	virtual void connect() override;
	virtual int32_t getContentLength() override;
	virtual int64_t getContentLengthLong() override;
	virtual $String* getHeaderField($String* name) override;
	virtual $String* getHeaderField(int32_t n) override;
	virtual $String* getHeaderFieldKey(int32_t n) override;
	virtual ::java::util::Map* getHeaderFields() override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual int64_t getLastModified() override;
	virtual ::java::security::Permission* getPermission() override;
	virtual ::sun::net::www::MessageHeader* getProperties() override;
	void initializeHeaders();
	static $String* CONTENT_LENGTH;
	static $String* CONTENT_TYPE;
	static $String* TEXT_PLAIN;
	static $String* LAST_MODIFIED;
	$String* contentType = nullptr;
	::java::io::InputStream* is = nullptr;
	::java::io::File* file = nullptr;
	$String* filename = nullptr;
	bool isDirectory = false;
	bool exists = false;
	::java::util::List* files = nullptr;
	int64_t length = 0;
	int64_t lastModified = 0;
	bool initializedHeaders = false;
	::java::security::Permission* permission = nullptr;
};

				} // file
			} // protocol
		} // www
	} // net
} // sun

#pragma pop_macro("CONTENT_LENGTH")
#pragma pop_macro("CONTENT_TYPE")
#pragma pop_macro("LAST_MODIFIED")
#pragma pop_macro("TEXT_PLAIN")

#endif // _sun_net_www_protocol_file_FileURLConnection_h_