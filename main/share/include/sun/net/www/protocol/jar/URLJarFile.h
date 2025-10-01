#ifndef _sun_net_www_protocol_jar_URLJarFile_h_
#define _sun_net_www_protocol_jar_URLJarFile_h_
//$ class sun.net.www.protocol.jar.URLJarFile
//$ extends java.util.jar.JarFile

#include <java/util/jar/JarFile.h>

#pragma push_macro("BUF_SIZE")
#undef BUF_SIZE

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Runtime$Version;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class Attributes;
			class Manifest;
		}
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipEntry;
		}
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {
					class URLJarFile$URLJarFileCloseController;
					class URLJarFileCallBack;
				}
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {

class $import URLJarFile : public ::java::util::jar::JarFile {
	$class(URLJarFile, 0, ::java::util::jar::JarFile)
public:
	URLJarFile();
	void init$(::java::io::File* file);
	void init$(::java::io::File* file, ::sun::net::www::protocol::jar::URLJarFile$URLJarFileCloseController* closeController);
	void init$(::java::io::File* file, ::sun::net::www::protocol::jar::URLJarFile$URLJarFileCloseController* closeController, ::java::lang::Runtime$Version* version);
	void init$(::java::net::URL* url, ::sun::net::www::protocol::jar::URLJarFile$URLJarFileCloseController* closeController, ::java::lang::Runtime$Version* version);
	virtual void close() override;
	virtual ::java::util::zip::ZipEntry* getEntry($String* name) override;
	static ::java::util::jar::JarFile* getJarFile(::java::net::URL* url);
	static ::java::util::jar::JarFile* getJarFile(::java::net::URL* url, ::sun::net::www::protocol::jar::URLJarFile$URLJarFileCloseController* closeController);
	virtual ::java::util::jar::Manifest* getManifest() override;
	static bool isFileURL(::java::net::URL* url);
	bool isSuperMan();
	static ::java::util::jar::JarFile* retrieve(::java::net::URL* url, ::sun::net::www::protocol::jar::URLJarFile$URLJarFileCloseController* closeController);
	static void setCallBack(::sun::net::www::protocol::jar::URLJarFileCallBack* cb);
	static ::sun::net::www::protocol::jar::URLJarFileCallBack* callback;
	::sun::net::www::protocol::jar::URLJarFile$URLJarFileCloseController* closeController = nullptr;
	static int32_t BUF_SIZE;
	::java::util::jar::Manifest* superMan = nullptr;
	::java::util::jar::Attributes* superAttr = nullptr;
	::java::util::Map* superEntries = nullptr;
};

				} // jar
			} // protocol
		} // www
	} // net
} // sun

#pragma pop_macro("BUF_SIZE")

#endif // _sun_net_www_protocol_jar_URLJarFile_h_