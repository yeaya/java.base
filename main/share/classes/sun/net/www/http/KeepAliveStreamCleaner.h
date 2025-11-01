#ifndef _sun_net_www_http_KeepAliveStreamCleaner_h_
#define _sun_net_www_http_KeepAliveStreamCleaner_h_
//$ class sun.net.www.http.KeepAliveStreamCleaner
//$ extends java.util.LinkedList
//$ implements java.lang.Runnable

#include <java/lang/Runnable.h>
#include <java/util/LinkedList.h>

#pragma push_macro("MAX_CAPACITY")
#undef MAX_CAPACITY
#pragma push_macro("MAX_DATA_REMAINING")
#undef MAX_DATA_REMAINING
#pragma push_macro("MAX_RETRIES")
#undef MAX_RETRIES
#pragma push_macro("TIMEOUT")
#undef TIMEOUT

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Condition;
				class ReentrantLock;
			}
		}
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace http {
				class KeepAliveCleanerEntry;
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace http {

class KeepAliveStreamCleaner : public ::java::util::LinkedList, public ::java::lang::Runnable {
	$class(KeepAliveStreamCleaner, 0, ::java::util::LinkedList, ::java::lang::Runnable)
public:
	KeepAliveStreamCleaner();
	using ::java::util::LinkedList::listIterator;
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void lock();
	virtual bool offer(::sun::net::www::http::KeepAliveCleanerEntry* e);
	virtual bool offer(Object$* e) override;
	virtual void run() override;
	void signalAll();
	using ::java::util::LinkedList::toArray;
	virtual $String* toString() override;
	void unlock();
	static int32_t MAX_DATA_REMAINING;
	static int32_t MAX_CAPACITY;
	static const int32_t TIMEOUT = 5000;
	static const int32_t MAX_RETRIES = 5;
	::java::util::concurrent::locks::ReentrantLock* queueLock = nullptr;
	::java::util::concurrent::locks::Condition* waiter = nullptr;
};

			} // http
		} // www
	} // net
} // sun

#pragma pop_macro("MAX_CAPACITY")
#pragma pop_macro("MAX_DATA_REMAINING")
#pragma pop_macro("MAX_RETRIES")
#pragma pop_macro("TIMEOUT")

#endif // _sun_net_www_http_KeepAliveStreamCleaner_h_