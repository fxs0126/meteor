
#ifndef _SINGLETON_H_
#define _SINGLETON_H_

template <class T> 
class Singleton
{
    public:
        Singleton<T>(T *obj)
        {
	    _instance = obj;
	}
    protected:
    private:
	static T* _instance;
}
;
template<class T>
T* Singleton<T>::_instance = 0;
#endif 

