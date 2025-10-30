#ifndef _sun_net_www_protocol_jrt_JavaRuntimeURLConnection$1_h_
#define _sun_net_www_protocol_jrt_JavaRuntimeURLConnection$1_h_
//$ class sun.net.www.protocol.jrt.JavaRuntimeURLConnection$1
//$ extends jdk.internal.loader.Resource

#include <jdk/internal/loader/Resource.h>
#include <java/lang/ClassEntry.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageLocation;
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jrt {

class JavaRuntimeURLConnection$1 : public ::jdk::internal::loader::Resource {
	$class(JavaRuntimeURLConnection$1, $NO_CLASS_INIT, ::jdk::internal::loader::Resource)
public:
	JavaRuntimeURLConnection$1();
	void init$($String* val$name, ::java::net::URL* val$url, $String* val$module, ::jdk::internal::jimage::ImageLocation* val$location);
	virtual ::java::net::URL* getCodeSourceURL() override;
	virtual int32_t getContentLength() override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual $String* getName() override;
	virtual ::java::net::URL* getURL() override;
	::jdk::internal::jimage::ImageLocation* val$location = nullptr;
	$String* val$module = nullptr;
	::java::net::URL* val$url = nullptr;
	$String* val$name = nullptr;
public:
	$bytes* resource = nullptr;
};

				} // jrt
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_jrt_JavaRuntimeURLConnection$1_h_