#ifndef _java_io_ObjectInputFilter$Config$Global_h_
#define _java_io_ObjectInputFilter$Config$Global_h_
//$ class java.io.ObjectInputFilter$Config$Global
//$ extends java.io.ObjectInputFilter

#include <java/io/ObjectInputFilter.h>

namespace java {
	namespace io {
		class ObjectInputFilter$FilterInfo;
		class ObjectInputFilter$Status;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace java {
	namespace io {

class $export ObjectInputFilter$Config$Global : public ::java::io::ObjectInputFilter {
	$class(ObjectInputFilter$Config$Global, $NO_CLASS_INIT, ::java::io::ObjectInputFilter)
public:
	ObjectInputFilter$Config$Global();
	void init$($String* pattern, bool checkComponentType);
	virtual ::java::io::ObjectInputFilter$Status* checkInput(::java::io::ObjectInputFilter$FilterInfo* filterInfo) override;
	static ::java::io::ObjectInputFilter* createFilter($String* pattern, bool checkComponentType);
	static bool lambda$checkInput$10(::java::io::ObjectInputFilter$Status* p);
	static ::java::io::ObjectInputFilter$Status* lambda$checkInput$9($Class* cl, ::java::util::function::Function* f);
	static ::java::io::ObjectInputFilter$Status* lambda$new$0($String* pkg, $Class* c);
	static ::java::io::ObjectInputFilter$Status* lambda$new$1($String* pkg, $Class* c);
	static ::java::io::ObjectInputFilter$Status* lambda$new$2($String* pkgs, $Class* c);
	static ::java::io::ObjectInputFilter$Status* lambda$new$3($String* pkgs, $Class* c);
	static ::java::io::ObjectInputFilter$Status* lambda$new$6($String* name, $Class* c);
	static ::java::io::ObjectInputFilter$Status* lambda$new$7($String* name, $Class* c);
	static ::java::io::ObjectInputFilter$Status* lambda$new$8($String* moduleName, ::java::util::function::Function* patternFilter, $Class* c);
	static bool matchesPackage($Class* c, $String* pkg);
	bool parseLimit($String* pattern);
	static int64_t parseValue($String* string);
	virtual $String* toString() override;
	$String* pattern = nullptr;
	::java::util::List* filters = nullptr;
	int64_t maxStreamBytes = 0;
	int64_t maxDepth = 0;
	int64_t maxReferences = 0;
	int64_t maxArrayLength = 0;
	bool checkComponentType = false;
};

	} // io
} // java

#endif // _java_io_ObjectInputFilter$Config$Global_h_