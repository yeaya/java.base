#ifndef _java_nio_file_AccessDeniedException_h_
#define _java_nio_file_AccessDeniedException_h_
//$ class java.nio.file.AccessDeniedException
//$ extends java.nio.file.FileSystemException

#include <java/nio/file/FileSystemException.h>

namespace java {
	namespace nio {
		namespace file {

class $export AccessDeniedException : public ::java::nio::file::FileSystemException {
	$class(AccessDeniedException, $NO_CLASS_INIT, ::java::nio::file::FileSystemException)
public:
	AccessDeniedException();
	void init$($String* file);
	void init$($String* file, $String* other, $String* reason);
	static const int64_t serialVersionUID = (int64_t)0x44993d6bf81c2721;
	AccessDeniedException(const AccessDeniedException& e);
	virtual void throw$() override;
	inline AccessDeniedException* operator ->() const {
		return (AccessDeniedException*)throwing$;
	}
	inline operator AccessDeniedException*() const {
		return (AccessDeniedException*)throwing$;
	}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_AccessDeniedException_h_