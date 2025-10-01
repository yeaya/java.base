#ifndef _COM_foo_content_text_plain_h_
#define _COM_foo_content_text_plain_h_
//$ class COM.foo.content.text.plain
//$ extends java.net.ContentHandler

#include <java/net/ContentHandler.h>

namespace java {
	namespace net {
		class URLConnection;
	}
}

namespace COM {
	namespace foo {
		namespace content {
			namespace text {

class $export plain : public ::java::net::ContentHandler {
	$class(plain, $NO_CLASS_INIT, ::java::net::ContentHandler)
public:
	plain();
	using ::java::net::ContentHandler::getContent;
	void init$();
	virtual $Object* getContent(::java::net::URLConnection* uc) override;
};

			} // text
		} // content
	} // foo
} // COM

#endif // _COM_foo_content_text_plain_h_