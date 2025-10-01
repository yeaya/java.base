#ifndef _sun_net_www_protocol_jar_JarURLConnection$JarURLInputStream_h_
#define _sun_net_www_protocol_jar_JarURLConnection$JarURLInputStream_h_
//$ class sun.net.www.protocol.jar.JarURLConnection$JarURLInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {
					class JarURLConnection;
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

class $export JarURLConnection$JarURLInputStream : public ::java::io::FilterInputStream {
	$class(JarURLConnection$JarURLInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	JarURLConnection$JarURLInputStream();
	void init$(::sun::net::www::protocol::jar::JarURLConnection* this$0, ::java::io::InputStream* src);
	virtual void close() override;
	::sun::net::www::protocol::jar::JarURLConnection* this$0 = nullptr;
};

				} // jar
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_jar_JarURLConnection$JarURLInputStream_h_