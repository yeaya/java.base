#ifndef _OpsAfterClose4PrintWriter$1_h_
#define _OpsAfterClose4PrintWriter$1_h_
//$ class OpsAfterClose4PrintWriter$1
//$ extends OpsAfterClose4PrintWriter

#include <OpsAfterClose4PrintWriter.h>

namespace java {
	namespace io {
		class PrintWriter;
	}
}

class OpsAfterClose4PrintWriter$1 : public ::OpsAfterClose4PrintWriter {
	$class(OpsAfterClose4PrintWriter$1, $NO_CLASS_INIT, ::OpsAfterClose4PrintWriter)
public:
	OpsAfterClose4PrintWriter$1();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::PrintWriter* w) override;
};

#endif // _OpsAfterClose4PrintWriter$1_h_