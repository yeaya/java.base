#ifndef _OpsAfterClose4InputStream$4_h_
#define _OpsAfterClose4InputStream$4_h_
//$ class OpsAfterClose4InputStream$4
//$ extends OpsAfterClose4InputStream

#include <OpsAfterClose4InputStream.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

class OpsAfterClose4InputStream$4 : public ::OpsAfterClose4InputStream {
	$class(OpsAfterClose4InputStream$4, $NO_CLASS_INIT, ::OpsAfterClose4InputStream)
public:
	OpsAfterClose4InputStream$4();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::InputStream* is) override;
};

#endif // _OpsAfterClose4InputStream$4_h_