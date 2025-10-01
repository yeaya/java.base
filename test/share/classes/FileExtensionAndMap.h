#ifndef _FileExtensionAndMap_h_
#define _FileExtensionAndMap_h_
//$ class FileExtensionAndMap
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CACHED_EXECUTORSERVICE")
#undef CACHED_EXECUTORSERVICE
#pragma push_macro("EMPTY_RECORD")
#undef EMPTY_RECORD
#pragma push_macro("TMPDIR")
#undef TMPDIR

namespace java {
	namespace nio {
		class MappedByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
			class Semaphore;
		}
	}
}

class $export FileExtensionAndMap : public ::java::lang::Object {
	$class(FileExtensionAndMap, 0, ::java::lang::Object)
public:
	FileExtensionAndMap();
	void init$();
	static void lambda$main$0($String* targetFolder, int32_t index);
	static void lambda$main$1($String* targetFolder);
	static void lambda$testCreateBigFile$2($String* fileName, ::java::nio::channels::FileChannel* fc, int64_t startPosition, int32_t blockSize, ::java::util::concurrent::Semaphore* concurrencySemaphore);
	static void lambda$writeTemplateData$4(::java::nio::MappedByteBuffer* mappedByteBuffer, $bytes* EMPTY_RECORD, $String* fileName, int64_t startPosition, int32_t recordIndex);
	static void main($StringArray* args);
	static void testCreateBigFile(::java::nio::file::Path* segmentFile);
	static void testFileCopy(::java::nio::file::Path* source, ::java::nio::file::Path* target);
	static void writeTemplateData($String* fileName, ::java::nio::channels::FileChannel* fc, int64_t startPosition, int32_t blockSize, ::java::util::concurrent::Semaphore* concurrencySemaphore);
	static ::java::util::concurrent::ExecutorService* CACHED_EXECUTORSERVICE;
	static $String* TMPDIR;
	static bool useRaf;
};

#pragma pop_macro("CACHED_EXECUTORSERVICE")
#pragma pop_macro("EMPTY_RECORD")
#pragma pop_macro("TMPDIR")

#endif // _FileExtensionAndMap_h_