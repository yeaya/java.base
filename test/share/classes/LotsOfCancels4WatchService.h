#ifndef _LotsOfCancels4WatchService_h_
#define _LotsOfCancels4WatchService_h_
//$ class LotsOfCancels4WatchService
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
			class WatchService;
		}
	}
}

class $export LotsOfCancels4WatchService : public ::java::lang::Object {
	$class(LotsOfCancels4WatchService, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LotsOfCancels4WatchService();
	void init$();
	static void handle(int32_t id, ::java::nio::file::Path* dir, ::java::nio::file::WatchService* watcher);
	static void lambda$main$0(int32_t id, ::java::nio::file::Path* dir, ::java::nio::file::WatchService* watcher);
	static void lambda$main$1(int32_t id, ::java::nio::file::WatchService* watcher);
	static void main($StringArray* args);
	static void poll(int32_t id, ::java::nio::file::WatchService* watcher);
	static $volatile(bool) failed;
};

#endif // _LotsOfCancels4WatchService_h_