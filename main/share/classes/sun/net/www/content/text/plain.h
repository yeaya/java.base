#ifndef _sun_net_www_content_text_plain_h_
#define _sun_net_www_content_text_plain_h_
//$ class sun.net.www.content.text.plain
//$ extends java.net.ContentHandler

#include <java/net/ContentHandler.h>

namespace java {
	namespace net {
		class URLConnection;
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace content {
				namespace text {

class plain : public ::java::net::ContentHandler {
	$class(plain, $NO_CLASS_INIT, ::java::net::ContentHandler)
public:
	plain();
	using ::java::net::ContentHandler::getContent;
	void init$();
	virtual $Object* getContent(::java::net::URLConnection* uc) override;
};

				} // text
			} // content
		} // www
	} // net
} // sun

#endif // _sun_net_www_content_text_plain_h_