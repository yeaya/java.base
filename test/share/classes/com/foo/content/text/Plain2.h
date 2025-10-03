#ifndef _com_foo_content_text_Plain2_h_
#define _com_foo_content_text_Plain2_h_
//$ class com.foo.content.text.Plain2
//$ extends java.net.ContentHandler

#include <java/net/ContentHandler.h>

namespace java {
	namespace net {
		class URLConnection;
	}
}

namespace com {
	namespace foo {
		namespace content {
			namespace text {

class $export Plain2 : public ::java::net::ContentHandler {
	$class(Plain2, $NO_CLASS_INIT, ::java::net::ContentHandler)
public:
	Plain2();
	using ::java::net::ContentHandler::getContent;
	void init$();
	virtual $Object* getContent(::java::net::URLConnection* uc) override;
};

			} // text
		} // content
	} // foo
} // com

#endif // _com_foo_content_text_Plain2_h_