#ifndef _sun_net_www_content_text_Generic_h_
#define _sun_net_www_content_text_Generic_h_
//$ class sun.net.www.content.text.Generic
//$ extends sun.net.www.content.text.plain

#include <sun/net/www/content/text/plain.h>

namespace sun {
	namespace net {
		namespace www {
			namespace content {
				namespace text {

class Generic : public ::sun::net::www::content::text::plain {
	$class(Generic, $NO_CLASS_INIT, ::sun::net::www::content::text::plain)
public:
	Generic();
	using ::sun::net::www::content::text::plain::getContent;
	void init$();
};

				} // text
			} // content
		} // www
	} // net
} // sun

#endif // _sun_net_www_content_text_Generic_h_