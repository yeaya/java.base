#ifndef _indify_Indify$1_h_
#define _indify_Indify$1_h_
//$ class indify.Indify$1
//$ extends java.io.FilenameFilter

#include <java/io/FilenameFilter.h>

namespace indify {
	class Indify;
}
namespace java {
	namespace io {
		class File;
	}
}

namespace indify {

class Indify$1 : public ::java::io::FilenameFilter {
	$class(Indify$1, $NO_CLASS_INIT, ::java::io::FilenameFilter)
public:
	Indify$1();
	void init$(::indify::Indify* this$0);
	virtual bool accept(::java::io::File* dir, $String* name) override;
	::indify::Indify* this$0 = nullptr;
};

} // indify

#endif // _indify_Indify$1_h_