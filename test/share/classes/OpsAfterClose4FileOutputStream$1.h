#ifndef _OpsAfterClose4FileOutputStream$1_h_
#define _OpsAfterClose4FileOutputStream$1_h_
//$ class OpsAfterClose4FileOutputStream$1
//$ extends OpsAfterClose4FileOutputStream

#include <OpsAfterClose4FileOutputStream.h>

namespace java {
	namespace io {
		class FileOutputStream;
	}
}

class OpsAfterClose4FileOutputStream$1 : public ::OpsAfterClose4FileOutputStream {
	$class(OpsAfterClose4FileOutputStream$1, $NO_CLASS_INIT, ::OpsAfterClose4FileOutputStream)
public:
	OpsAfterClose4FileOutputStream$1();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::FileOutputStream* r) override;
};

#endif // _OpsAfterClose4FileOutputStream$1_h_