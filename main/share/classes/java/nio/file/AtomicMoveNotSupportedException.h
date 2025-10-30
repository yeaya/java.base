#ifndef _java_nio_file_AtomicMoveNotSupportedException_h_
#define _java_nio_file_AtomicMoveNotSupportedException_h_
//$ class java.nio.file.AtomicMoveNotSupportedException
//$ extends java.nio.file.FileSystemException

#include <java/nio/file/FileSystemException.h>

namespace java {
	namespace nio {
		namespace file {

class $export AtomicMoveNotSupportedException : public ::java::nio::file::FileSystemException {
	$class(AtomicMoveNotSupportedException, $NO_CLASS_INIT, ::java::nio::file::FileSystemException)
public:
	AtomicMoveNotSupportedException();
	void init$($String* source, $String* target, $String* reason);
	static const int64_t serialVersionUID = (int64_t)0x4AFA75CCC59748DB;
	AtomicMoveNotSupportedException(const AtomicMoveNotSupportedException& e);
	virtual void throw$() override;
	inline AtomicMoveNotSupportedException* operator ->() {
		return (AtomicMoveNotSupportedException*)throwing$;
	}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_AtomicMoveNotSupportedException_h_