#define LOADING_SCREEN_CLASS(className,authorName) \
    class className { \
        author = QUOTE(authorName); \
        path = QPATHTOF(ui\##className##.paa); \
    }

class GVAR(CfgLoadingScreen) {
    class Backgrounds {
        LOADING_SCREEN_CLASS(AdobeStock_269676636,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_269676677,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_271859839,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_285905473,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_296841733,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_297308106,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_298480575,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_361616315,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_287796119,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_288887578,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_319048089,Ghosts of Battle);
        LOADING_SCREEN_CLASS(maxresdefault,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_269677107,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_272813407,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_275306051,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_283924597,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_371890417,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_400370807,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_254754921,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_273347491,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_275458856,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_286142395,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_298331323,Ghosts of Battle);
        LOADING_SCREEN_CLASS(AdobeStock_356376886,Ghosts of Battle);
        LOADING_SCREEN_CLASS(S291207115895,Ghosts of Battle);
    };
};
