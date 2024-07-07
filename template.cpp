#include <bits/stdc++.h>
using namespace std;

template<typename T> inline void fr(T& num){
	num=0;short sign=1;char ch=std::getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-')sign=-1;
		ch=std::getchar();
	}
	while(ch>='0'&&ch<='9')num=num*10+ch-'0',ch=getchar();
	num=num*sign;
}
template<typename T>inline void fw(T x){
	if(x<0)std::putchar('-'),x=-x;
	if(x>9)fw(x/10);
	std::putchar(x%10+'0');
}

/*
                                                              $oo*oo*!..........................;%%%%%%%%%%%%%%%%%*o!!!%$#                                       %%%%%o                ;!!;!!!!!!       
                                                               %%%%%%%!;;;;;;;;;;;;;;;;;;;;;;;;;;;!$%%%%%$$$%%$$$$$$$$%**$$#%  ; ..o..;                          $$$$$%;               *ooooooo**       
                                                               ;%%%%%%$!!;;;;;;;;;;;;;;;;;;;;;;;;;;;%%$%$$$$$$$$$$$$$$$$$$$$$#*   ..!;;.                         $$$$$$;.              *ooooooo**       
                                                                !%%%%%%%!!!;;;;;;;;;;;;;;;;;;;;;;;;;;;%%%$$$%%%$$$$$$$$$$$$$$$%  !.. .;!                         &$$$$$;;.             ooooooo***       
                                                                 o%%$$$$o!;;;;;;;;;;;;;;;;;;;;;;;;;;;;;!$$%%%$%%$$$$$$$$$$$$$%!  *...o;;!                        &$$$$$;;;.            ooooooo***       
                                                                  .%$$$$$!!;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;!%%%$%%%%$$$$$$$$$$$*........o;;       ;                *$$$$$;!;;            ooooooo**!       
                                                                   ;$$$$$$!!!;;;;;;;;;;;;;;;;;;;;;;;;;;;;;!!$%$$%$%$$%%%%$$$$*........;;;$ !    ;                .$$$$$!;;;;           ooooooo**        
                                                                     $$$$$$o!;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;!$%%%$%%%% ;***%*.........o;o*;   *.                 $$$$$o!;;;;         ;oooooo***        
                                                                      $$$$$$%;!!;;;;;;;;;!!!!;!;;;;;;;;;;;;;;!;o%%%%%%*    .o!.....;;;.;;;;;*# ..!                $$$$$%;;;;;;        *ooooo****        
                                                                       !$$$$&$o;!;;;!!!!!!*&#####$!!;;;;;;;;;;;;;;*%%%* ! .! ......;.;...;;;o$%..*                $$$$$&;;;;;;;       %oooooo***        
                                                                         &$$$&&$!!!!!;o##o!;!!!!o%o$;;;;;;;.!!;..;..o@%.;     .....;.;*@$%;!;$*..*                $$$$$#;;;;;;;.      *oooooo**o        
                                                                          ;&$$$$&$!%$&o;!;;;!;!!!;!*!;;;;    .     ;!o;.!     .....$&$$$%%%..%;!;o!               &%$$$&;;;;;;;;.     ooooooo**         
                                                                            o$&&&&o&!!!!;;;;;;;;;;;!!!;!o     .        .;     ..;&$$$$$$%%$%!o.o.*&               $$$$$$!;;;;;;;;.    ooooooo*o         
                                                                              &#!!$$$%;!!!!;;;;;;;;!!!!!o      ;....    ..     &%$$$$$%%%%%%%....*$$              ;$$$$$;;;;;;;;;;    oooooo***         
                                                                              %!!&&$$$$&*!!!!!!;;;;;;;!;;  !             .. ;&$$$$$$$%%%%%%%%#...o!$&              $$$$$!;;;;;;;;;;   oooooo*o%         
                                   ..                                        *!!*  &$$$$$&&!!!!!!!!;;!;;;         .      .;&$$$$$$$$$%%%%%%%%$...!oo%@             $$$$$o;;;;;;;;;;. ooooooo**$         
                             !.         ;                                   *!;;      %&$$$$$#*!!!!!;;!!;!  !            #$$$$$$$$$$$%%%%%%%%$&. !*oo!o            $$$$$&;;;;;;;;;;; $oooooo**!         
                           ;               .!                               !!;;         %@&$%$&&o!;!!!!;o          !  oo&&&&$$$$$$$$$%%%%%%%%$  !!%*!!o           #$$$$#;;;;;;;;;;;;$oooooo**          
                         ;                     .                           *!!;o             .$#&$$$&&&*!;*  o    ...o%ooooo%$$$$$$$$$%%%%%%%%%o !!%*!!o**&;       %$$$$@;;;;;;;;;;;;%oooooo**          
                                                !                          %!!;*                  ;%#&%$$$*         #oooooo*%$$$$$$$$$%%%%%%%%%$ !!!*;!!*o*$$*      $$$$&;;;;;;;;;;;;*ooooo**%          
                      o                          ..                        *!!;*                        .!!*       %%oooooo%$$$$$$$$$$$%%%%%%%%%o;;!o;;;;;;!%%$$&   $$$$$;;;;;;;;;;;;%ooooo**%          
                                           o      .                        %*!;!                           ;!.   ;%%ooooooo%$$$$$$$$$$$$%$%%%%%%& ;;%...;...!$$$$$$$%$$$$;;;;;;;;;;;;%*ooooo*.          
                                          %        ;                       %%!!!                      * o       ;%%*oooooo%$$$$$$$$$$$&$&&&#$% *% ;;..   ...o;$$$$$$$&$$$;;;;;;;;;;;;%%oooo**           
                   !                     o                                 %%oo!                               %%%%ooooooo%$$$$$$$$$&&%&&&##&$   !;... *   oo o*$$$$$$$$$;;;;;;;;;;;;%%*ooo**           
                   .                     ;           .                     &%$!o*                    !   .    &%%%%oooooo%$$$$$$$$&*$*&#&&&#&&% ; ;..       o* *o*$$$$$$&;;;;;;;;;;;!$%%ooo**           
                  !                     $                         *!;;;     %$%%*             %   ;....!....!#%%%%*%&&&&&&$****%$%o**&####&&&&$ ! *     ;    o !ooo*$$$$$!;;;;;;;;;;o$%%ooo**           
                                        o                       %*%*!;;;!;  ;&&o$*              !....;...;. &#%!;o***$&$**%&&&&&*oo*&&$$&&&&&&&   %      *    % ooooo*%$$$%;;;;;;;;;*$$$%oo*&           
                 ;                     $!                     $&%o!!;;;;;.o  #&&$&             %...!......!;;..o***$$%*$&@@&&*o$oo%$&*%$$$&####o  o       !     *oooooo*%$$o;;;;;;;;*$$$$o**%           
                                       *!;                  *%$*oo!!;!!!;;.;! #&&&&          ;.$*;o;....*;;..!ooo%$%&&&$$#%oo%*oo**&$&&%$#&&#&$!      o    ;     ooooooooo*%*;;;;;;;$$$$$%**!           
                o                      *!$             !   #%$**%$$&&&&&&&o;;! &&#&           .;**o..!*;...!!o;;&%&#$$$&*o$%oo*ooo&$*o&%*%&&*      .  **    ;  ! oooooooooo%%!;;;;;;&$$$$$%*.           
                                       *o;             . ;%%%%*%&#@##*!;;;;;ooo %!$#o         oo$**$!;..;!!;.;%#&$$$$&*%%oooo%ooo*oo%oo*&#$    .   .  *o*    !   *oooooooooo%$;;;;;;$$$$$%%*            
                                       %!;$             !%%$%      %!;;!;;;;;;!o **oo*****o*****o*****;o$!;;;#$$$$$$%*&&&%*o*oo%oo%ooo*&&&.        !  ;oo;       %ooooooooooo%*;;;;;$$$$$%**            
               ;                       !o!!*           #%&        *o!;;!;!!!;;;;!  &&$$%*********o***o%#***#%%$$$$$&&*!!ooo%oo*o%ooooo*&&&$        *   oo   ;    ooooooooooooo%;;;;;$$$$$$**            
               o                        $!!;&         &%*        **!;!%*!!;!!;;.;!   $%****o******&o****%$&&&&%o!;;;;ooo!;oo*o!%oooooo*$&#$         .  *!   o   * oooooooooooo%%;;;;$$$$$%%*            
               o                         o!!!%&;    ;*%.o       &*oo$$&&$&$%%$*;;;!      %#%*$&&&&%%!o*ooo!o%*!.........;**;.*!oooooo*ooo%&% .      o  %       *o ooooooooooooo%;;;;%$$$$$%$            
               o                          *!!$%%**%#%.  !       **%$&    &&%%%%&o;;;;            ;;..%;;!oooo!;;;;.....*!...*ooooooooooooo%$  !  .!;%      o  .*o *oooooooooooo%$;;;$$$$$%%&            
               o                            o%$%%$!     !      %*$&       !$$%%%%$;;*            .;%&##$..;..;;;;....;*;.;.!ooooooooooooo&%&%        .  .     !oo *oooooooooooo*%;;;%%$$$%%#            
               o                                        !      **$          %#*$$%$;;&       .!%**%&&&&&&&%;;o*%%***&;;.. !;!!;ooooo*o*$*o&&$o       .  $  o   oo*ooooooooooooo*%&;;%%%$$$%$            
               ;                                  .     o     .*&           o%#*o%%&;$&  !!..$ooo*o**&$$%%o!o*%&&&$%;;;..!;!.;o;%;o%o*&o*&$&&%.      %  .   !   .* oooooooooooo**$o;%$$%%$%o            
                                                  .           &*             &*&*oo$$o$$...$*oo%*oo$&$$#&&&&&&%*$&*!!;..!.o..;;&;!$o$%o*$&&&&&%       .      ;   . ooooooooooooo*%$;%$%%$%%             
                                                              @&              %*$ooo$!%*&$.*o***%*!$$$#&&&$*oo*&&%o;oo.*.!..;.%;;%o&$o*$%&&&&&$*      ;  o         ooooooooooooo*%%!%%$%%%%             
                !                                             #               &*% *o$o**%&&*o*&*!;$$&&$*oooo*&&#&!*&o.%.!..o.&*.*o&$$&%%&&&$&&$$*     %  o%       .*oooooooooooo*%%$%%$%$%*             
                                                              #                **$;*%&***##&****o%&&ooooo**&&&&&o##;.%.o.!@&%$@$$&&&o%o&&*&&&&$$$*        o%   ;  oooooooooooooo*%%%%%%$%%%             
                                            .         .       *                o*& ;%%*%**##oo&&&#*ooooo$*#&&#&&&#.;;.*!%&;o;o;$&#!;%!o*o&&&&&&$$&o ;  ;  *oo  *  o oooooooooooo*%%%&$$$%%%             
                 ;                                    ;       $                &o%  &%****$#*o&&$oooo%$!!&&&##&#&;o.*%!%&$.;*;$&%.;$oooo*&&&&&&&&$ .   %  !o%  ;  ; oooooooo%ooo*%%%$%%%%%%             
                                                     o        o                .!*   %%**oo#&oooo*%o;;;$*&&&&&##o&.&%!$&&!*%$*&...%ooooo**$&&&&&&* !   ..  o;     o ooooooo%%ooo*%%%%%%%%%&             
                                                          o%%%$&%.              !!    &**ooo#ooo!;;.;o$*&&&&%&#&*.;;*&&##$.;*&.  %!!ooo%oo*%&&&&&      ..  *      * oooooo*%%oo*%%%%%&%%%%$             
                  .                                 !  $$ooooo*%%%%o%!          %! !  o***&%oooooo*$&#*%o&#%#&&o%.&$&&#$o%@%!.  ;!!oo*ooooo*$$#&&          *      o %ooooo$%%oo*%%%%%$%%%%              
                                                   o  *ooooo*****oooo*o&;       $!!   .$&&&&&&&#&$&&$%%oo#&&&&o#;*%&&#%$##&&# % !!!o&oooo*%o*&&*%*  o             o !oooo$$%%oo%%%%%%%%%%%              
                                                  ! %oooooo*o**ooooo*%$&&&#      o#  ;.*ooo**&$&$#&&#ooo&&&&#&&o.&&&&#@%.;#*@# o*!o&oo*%&*$&$%&o!.!  .;  .  !     *o ooo%$%%%o*%%%%%%%$%%$              
                                                 ! %*oooo**$%**$##&&&&&&&&&&#    o%  !.*oo*oo*$#&##&$ooo&&&&#%&!o&&##$@%.###@@$o!!&o*$$$&&&$o.;..;;%;       !      % ooo$$$%%o%%%%%%%%%%%               
                      .                         ; $oo!o*$$%$#$$$$$$&*oo**oo**$&o #o   ;&ooo*oo**#&$&&ooo&&#&&&$!&&#&&&  &####&%*;$*%$&&&$$...   .;!&&.    .    o     oo$%$$%%*%%%%%%%%%%%               
                        o                     ***$oo!o%%%&$$$$#&%$ooo%oooooooooo$ *$ ;..**o%ooo%o&&o&&&&&&&&%&o!&##&#%.#@##### ;o&$&#!&&%%*     ..#&&    .!     o    !o%$$%$%%%%%%%%%%%%*               
                         *;                 o*****!!o%%$%$#!   $ooo%oooo!!!!!oo!oo&%o ..#o*o$ooooo$&oooo*$&&&&o$&&&#!   &#%@#$$;&&%..&% !o*     .&&&% o .!.  o   !    $$$%$%%%%%%%%%%%%%                
                       *****!           .;*****o%o!*%%%$*     .!!o%oo!!!oo!!oooooo*&$ ..@%ooo&ooooo&ooooooo%&#o#&&##   o$#@@# !*&...&; %@@@@@   #&&&!  !.  . .%   !   %%$$$%%%%%%%%%%%%;                
                        **%%*%**********o*o****$oo%%%&;       ooo%*!o*&o       *&o$%$&# #$#ooo&oooo*ooo&##&$&#o&&&#o   ;.!%%$ ;  ..&. o;..o@#**&&&&% *     !  **     ;o%$$%%%%%%%%%%%%*                 
                        .;;;!!!oo***%***%*****ooo*%$*         oo%%*%.           $ ;o#&#&%$$#*oo$oooooo%&&&&&&#o&*&#    *..;*  *  . ;     #@#@@&*%&$% ;     %  *oo    !!%%%$%%%$%%%%%%%*                 
                        ..;;o*%%***%*%#$**%o!;%!*%&o          o*%$               &  ##&&&&#$$$ooo*oooo&*&&&&&&%#&##;..  !     !   o     #####%o$!%*.       ;;  o;   ;*!%%$$%%%%%%%%%%**                 
                        ;..;;;;;;o***&&#**!oo!o*%             o%%               .&   &#&&&&&&&&#*ooo&o#o*$&$&&*&##  ..!       %        #&&##&#@@%%$         !  o   .!o%!%%$%%%%%%%%%%%%                 
                         ...;;;;;!*%*&&@**$;;%o&.             &$.               o&*;o###&&&*$&$&$&$ooo#ooo%&&#$&#&                     &###*&##@#%%         *  %.  !!!*!%%%%%%%%%%%%%*%                 
                         ..;;;;o*%**$&&&***% %$!.. ;          .&                 $ !     .&#&%$%$&$$$*&oooo*##&&#                      !$##%###@@$o   o     ;  .  .!!!%*!%%%%%%%%%%%**o                 
                         .;;;o%%**** &&&****%%!                #                 $* .     #$#&$*ooooo#%ooo*&&&&#&                     &!!####@@#@*o.    !    ;  ; !!!!!*o%%%%%%%%%%%**                  
                         !o$******o  #&&$****#*%*!             o                 $$o       &$$*%$&$%*o**$&$&%&&##                     !!.*#$%@#;#*o$*     ; .o  *;!o!!!!o!%%%%%%%%%%**                  
                       ; ;ooo******  #&&#***&**ooo!o*!                           $$$#*     @&$$*o*o*%%&$%*o*&&&%#*                     %;.;!o@%@%*o&$%.     .o;..!!!*!!!!oo%%%%%%%%**%                  
                        o!!ooooo**   #&&#*o*#oooooo!!!o%        *                $$$&&&.   .&**$$%$%**o&oo$&&&*##&                      #o;.%!*%oo$&&&&%;  .. !;!*!!!o!!!!;%%%%%$%%%*                   
                        .oooooooo    !&&&*o;#*ooooo!!!o%                         &$$&&&!.   #&o%$$$oooo*&oo%!%&###       .             ...    &$*o$&&&&&&%*. .o;!o!!!!!o!!o!%%%%%%%**                   
                   ;     !ooooo*      &&&@!.ooo;;;!oo!*                           $$&o*#!.. !&#$$$$$%*%*!o&o!*###&       !!o          %!.... &$oo$%&&&&&&&#% ; !!!**!!!!!!!!o%%%%%***                   
                 !.o   ! o!ooo!       $$&&o.!;o!.;....            .                $&ooo!!. .&&&&&###&&!!*&#o!o###%     ;!!!o         %oo%! &&%%oooo&&&&&&&%.! o;!o*%!!!!!!*!%%%%%**$                   
               o .       .o!!o;       #%&&.!!.;!...  !              o               &&*o%!;..&#!....$%;..&&&#oo@###      ..  .         **oooooooo*o%%o%&&&&%.!  !!!***!;*!!*!!%%%%**                    
             ..  ..     * !oo%        #*$&& %;.;;..                                     o!!..&!.....o   $&&&&%o%###;       ..          .!**oo%%$*o%*oo$%*$&%.o  .!!***!!*!!**!%*%%*%                    
            !;   !        .!%         ;*%&# !!.....;;                                  ..!!;.*o*........&&&&&&$$#&&&                    !$$*ooo*&%ooo$&oo&&*.!   o!!**!;o!!**o!%***.                    
               !         . o           **&&  !!.                                       *.o!o.ooo o;.!.; ;%ooooo*&&&&*                   ;o#$$$$&oooo*&ooo&$%.    !!;o%!!!!!***!%%*%                     
                ;          .     ;     **%o  ;  ..;. *                                 . !;oo!*oo  .o;;;.&&&&&&#!&&&&                 .$**%$&&ooooo*&ooo$$*%      o;!*!!!!!***!%*$                      
                      .   ..  !   ;    %     ;;!;.;.                          $          %.!oooooo   ..;; #&&&&&%#&&&!     .!o%%%*o*%$&$$$%oooooo*o$ooo*$$*%%**!  *!;%!!!;!!**!%*                       
               ;      ;         ...  !     !    ...o                      ;**$. ..%      o..!o*!o!o!  ..;o*&&&#&&$&&&&%#&&$*ooooooo%ooooooooo!o%oo$ooo%$$o&$&&&$  .!!!!!!!!!!*!*                        
                      ;;      !  ;....   ;      ...   *                 %      *  .%%#.   ...oo*ooo$$o!;;;;;;;;!o%&&$&&&&%*oo*oo$$oooooooo;!o*ooo$ooo$o$$&&$&&&$;;.;;!*!!*!!!*!;                        
              o       ;;         .!...;         ..    !                          ! ;o*. . *...!%o;;....;o%$&&##&&$&o&$o$$*o***&**oooooooooooooo%%ooo$o$$$&ooo$&&%..o;!!!!!o!!*!                         
                  ..  ;;;        ....;.    o*o....  o                              .!o@@@&%!.%o!;;.;!%$$#$!o!&&&&&o$$&$$$*%*$$****ooooooooooo*$%o!**o$$$&ooo$$&&%.. o;!o!!!!ooo                         
             !   ..;  ;;;..       ..    ;       o.  . .              o            !..o*#&&$&*o!;;o$%$#oo%%oo!o$&$!*$%&%$%$*&$*ooo*%&&%**oo*%%$*%$&!o&&$$o*o%&&$$$%.!.!!!*!!!*o                          
             o!*%$$$$**!;..            o          ;  .                             $.oo*&&&*o!;!*;*&; !%o!o*$&&##!$*#$.$$*$$oo*%$$$&&&$&$$$$$$$&%oo#&&$$*oo$$$$$&%;;;;;!*o*!o                           
             ooooooooooooo*$!         !            ;   ;            *              .*;o*o$%*o!!;;$%ooooooo&%$o&$%!o&#$!$$&$*&$%%%%%%%%%$!%$$$*!ooo&%$&&ooo$&*$%$%%$.;;!.o**!                            
             ooooo%!!*o*ooooooo%!   .%               . !                            %$&ooo**o!!!$*o!o%%%o&%$o&$$!!*$&$$o$$&$&%%&%ooo*%%%$$$$$$$&&%%%#&$!o$$%*o%$$%%..;..!;o*                            
            &oo%%*!ooo%ooo*%*ooooo**                %  o           $                %$&&o**oo!!%.;*;;!oo%%%%%$#%oo#&&$$;&$$$&$;$;ooo!oo*%%$&$$$&$%%%#&$*$$$oo$$%%%%*.      .                            
            *o*%*ooo!!!%ooo%%%%%%ooo%                                   ;;o   ;.o    $$$$&**!!!!%!!;!$; $%%$*ooooo&&&$$%.$&o#$$$$%o!!o!!!oo!o**%%%%%#&&&$$o*&$%$%%$&..                                  
            oo%$!oooo#!!*oo*%%%%%%%%$                %    !o          !!;;.   ;.;*   $$$$$#*!!o%$%*o!!  #*#$!%!o*o&&&$$*o*$*&#$&&$oo!!oo!!ooo!o*%%%%#$&$*%%$$$$&&$$%;.;   *                             
           .oo%!oooo&$&;%*oo%%oo%o$!.          !;&     ;    ;     %   !..;$ *;...;   $$$%* oo!$ooo!;.!!$;&o*ooo!&oo%#o$oo;!$$&$#$ooo!!!!!!!!!!!o*%%%$&&o$$$$$%%%$%%%$;;;.*                              
           *oo$oooo&$$$ !!*oo$;!%% ;    *!%   $..;o   *   .      #$   ;..;;!;....;   $$%*! !!!$$o;...o*%&%*oo!oooo*o#&*$oo;*$&$$oo!!!!!!!!!!!o!o*%%$$$$$$$$$$$$$%%%%&;;;*                               
           &oooooo*$$$$& *!%o;!!. $.  ..o;;;  ;;..;.  o        #$$   o;..;;;*.....!  *$  . %;o$%!   .%%%%oo!ooooo%&%%$%*ooo;;&&%o!o!!!!!!!!o*ooo*%%&$%%%%*$$$$$%$%%%;;o%$                               
           &o$ooo!$%$$$$ !!!%;! *..o   o..;;$;;...;*         *$$$$   o!....o....;%%  * .. *; o%%$. . %%%*oooooooo &#%$&oo!!o!;&$oo!!!!o!ooo%ooo%%%%;$%%%ooo%$$%$%%%$;o$!$                               
           $o!ooo&%%$$$$ !*!!*;  ..%   ....;;oo.....  .!   .&$$$$$   ;...........;o  o . o!    $%&!.$%%%%*ooooooo%;o$*$&o!!!!o;&&ooo!!!oo*%*oo%%%%*oo%%%ooooo%$%%%%;;!%*                                
           %*o!o!%%%%$$&.!%!!*; .. *   ;...;.;....;;*  @$$$&$$$$$$   ;;..........oo  o..o!.     #$$.%%%%%%****$&$$$%*$*&$o!;;;%;!&oo!!!oo*%oo%%%%%$!;oo*%$%%%o;%o;;.!;                                  
           %$!!!%%%%%$$$*.*!!o*o*  %   .;..........;o  *$$&$$$$$%$   ;............;  %o! ..  .!$$&&$$%%%***ooooooooooo%o$$o;;;;%;.%o!!ooo%**$$$%%o!!o!!...;..;; ...; ;.                                 
           *!!!!$%%%%%$$% *!!o%ooo !   *............;   $$$$$%***&   ;...........;   %&. o$%oo**%%%&&&oooooooooooooo!oo$o%&!;.;;$;.;%ooo*%%%$$$$%*!;o;;!..;.;;. ..;; .*                                 
           $!!!!%%*%%%%$$ o!!!!o*o     ;.............   &$&$$****&   ...;.......;.   $%%$&%%%%***oooo*&$oooooooooooo!!oooo!$!;.;;o!;;;oo%%%%$$$$o!*!!;;;;....!. .;.;! !                                 
           o!!!**o.o**%$& o!!*ooo!*    !...........;.   #$&$$**%*#   ;;...........   $%%%$$&$%%****ooooo%$oooooo!ooo!!!oo*$;oo;..;!!...;*%%$$$$%*!!o!;;... ..;   !.;                                    
           .;;;#!..;!o*%& !!!*oo!%o $  %!...........;   $&&&&$%&&@   ;;.;;......;*   %*oo*%$%$&%%***oooooooooooo!!!!!!!oo&$#!;o;...;&.;..;!$%$%oo;!!!o;...  ..   !.                                     
             ..*!o.  !**& ;%!!$oooo*%   ;...........$.  .&&&&  .#@   ...;;;......%   *oooooo*%%$%%**oooooooooooooo!!o!o!%&$o#$;.;..;!&;.;.;;o%%* ;;;;;;...  .    ..                                     
              ;!.     !o& .o !!%o!%oo   *;...........%   &&&o    %   *.;;;;;....$.   *oooooooooo*$%%*oooooooooooo!!!!oo$$%%o$  %;...;;*o;;!.;*o  ;;!!o ..         ;                                     
   ..                  !# .o$.!oooooo   o!..........o$   &&#  !  ;   %;;;;;;;...;    *oooooooooooo%&%%%%%**oooooo!!!!!!&@%&!*o#$&!;.;;;*$;;o.;%        !.       o o                                     
   ..                  ;! .o* !o*oo*!o   ..;.........$   &&. ;  o.   $;;;;;;;;.;.   .**ooooooooooooo*%%%%%%%**oooo!!o!!*..$o&$&&&@*;;;;!o&!;;;!         .  ;      .                                     
  ...              .   .! .oo% !ooo*!$   o;;;;.......%   #&          ;o;;;;;;;;;*   o$%*ooooooooooooo*%%%%%%%**ooooo!!!o$*$*&&&&&&$o$o!!!*&!;;!%        ;   !  .                                        
  ....             ....;! !oo  .oo!o!o   .;;;;;;;;;;.*   ## o         ;;;;!;;;;;!   $&&**ooooooooooooooooooooooo!!oo!o!!!o*$&&&&&&&*&%$&#**$$;;%o        .   ; . *                                      
   ...          .. ...;!; o*%   .o!o%!#   *;;;;;;;;;.;   $!           !;;!!!!;;*    ;&&%**ooooooooooooooooooooooo$$**oo!!!o$&&&&#&%%%##$$$%#!o!;$         ;                                             
    ...         ..  ..;;;.!%       ;o!o    o;;;;;;;;;;   ; ..         &;!!!!!!;o     ###%**ooooooooooooooooo!ooo%$%o!!!!!o!&$$&&#$%&$$$$$&$    !;$    .         *                                       
    ...         ..  ..;;;.!     o   o ;    !!!!!!!;;;;     !      *   !!!!!!!!!*   .    .&&*oooooooooooooooooooo&$*!!!!!!%%&&&$#$$*&$$$$$$      %;; !;  !   ;  !                                        
     ..         ...  ..;;;     o    *  &   .;!!!!!!!!;           .&    !!!!!!!!    $;  ! &&*ooooooooooooo%ooooo%$$o!!!oo%&%&&&&$$$$$$$$$%$*      **;;;.  .    !                                         
      .         ...  .;.;;o        **  $    %!!!!!!!!;    .  .!o;;%    !!!!!!!;    *.  o &&$&&; .o$%ooooo$ooooo&%%oo!!*$%$$&&&&$$$$$$$$*;$$      !o.;  .  !                                             
       .        ...   ...;*   .    %*  *&    !!!!!!!!!    . ;!;%*;!    *!!!!!!%    ;*  ! !.         *oooo*%ooo%&$*!!o$$%%$$&&&&&$$$$$%$;;!$     ;.*;.   .        ;                                      
       .         ..    ..;*        **. !.    %!!!!!!!!    !*;%%%%%o     !!!!!!    .;;% .o .!;       !**oo*$ooo$$$o!*$%!&$$$%%$%$$$$$$$o!;%*    ..;;!     !    !    !    !;       .                      
                 ..      ;*    %   **;.!.!    !!!!!!!!    $             !!!!!o    &*o               !$$ooo$*o*$%$!%$%%!&$$$$$$&&&%!;;;;;!!!!; ..!;.!      ! .  ;   . !                                  
                  .      .!        o*!;!.!     !!!!!!!    $             o!!!!%    $**    $          ;$$ooo$$o$$$%%%%%% #&&$$$@$$$$$$%*$*o*$;;;;!;..*       ! .             ;;!o.                        
                         ;;&    $  .*!;!;.*    !!!!!!!    $        ;     !!!!.    %*;    %!       ; $&%ooo$$*$$$%%%%%%%*$$$$$$$$$$$%& ;;%o..;;!;;. $             .   ;!.                                
 .                        ;oo    ..;o!;!        !!!!!!    *        *     !!!;    .&;#  .;* ;      * #$*ooo$$$%$$$%%%%%$$$$$$$$$$$%%&.;..;;$.;;;;. &%.oo!!!!!oo!   ;;                                    
  ;        !               oo    $;;;!;!..$;    !!!!!%    o              .;!o    !o&**.o# * o     . &$oooo$$%%$$$$$%%$$$&%$$$%%%%*%;.....&!oo!*o;$%$;;!ooo**o!!o;                                       
   ;        ;              .o   .;;;;!;o;        ;!!!*                           * !o;     * %     !$$oooo$$%$$$$$$$$$$%%%$%o!!o!*......!**%%%%%%%%!;;;!!!!!o***!o                                      
    ..                     .;   .;!;;;;%..  $     o;!                               %#     .. ;    #$$oooo%$%$$$$&&$%$$%$%$%!o!!%;...;*;;..!$%%%%$!;!!!!o!!!!%***!!                                     
       .     !         .    .  ..!;;;;;%. %!;                                       &&@      .     o&*oooo%%$$$$#$$$$$$$$%$%!o%....o.......;;o&$;;*;;;;!!!!o!!o***o;o .                                 
       ...    .        ;    .; .;!;;;;;*... .*                                     &&&@%.    * *. .  !$ooo*$$$$$#$$$$$$$$$$%%...;!....;;.;.....;o;.;;;;!!!!!o!!!!!!!;o.                                 
        ...   .      ..;    .; .*;;;;;;!   .o.                                    @&&& ;$    o$ !      $oo*&$$$$$$%$$$$$%$&;.;o!....!.......;......;!**!!!!!!!!!!!!!o.;                                 
         ....  !     .....  .;!%;;;;;;;!  .$                                     &&&&*  #    *o      o &oo*&$$$&$$$$$$$%!%o.*....................;;**oo*!!!!!!!o!!!;;! ;                                
          .....;;..   ..! .  ;o..;;;;!;..                                      .&&&&&        $o* *    %&oo*$$$&$$$$$$$%%!%!........!o!;.........;;;;;;!!!oo!!!!!!!!.. o                                 
           .... o...  ..o .. ;  .;;;!;;. .%                                   ;&&&&*     ;   oo*      &&*o*$$$$$$$$$$%%%!%;.....;o..........;.;;;;;;;;;!!;!!oo;;;;.o   . ;                              
           ;.;...o.... .o;.. ;  ..;*%;!   .                                  &&&&&       %    oo* *       *&$$$$$$$$$%%%!%!.;o.....;*$%%*%***********%%*!!;!!;!;;       .         !                     
             .!!.o;... .o!...!  ..!%$;%  .                                  &&&&&             *oo.o    .     &$%$$$$$%%%o*;;...!%%%%**********************%o;;;o           *         ;                  
     .!;... .!ooo*o... .;!..!   .;%%*;o. *                                &$$$&!          $    o*.;        !   $%$$&%%%%% .;%$%%%%%********%***************o*;. ;     .  .  o     ;.                    
           .;!ooo*o!...  !!.! ;..o%%;!.                                 o$%%$o            .      *;%            &%%$%$%$!$%$%%%%%%%********%%*****************!.      !   .  ;        .                 
               oo**o.... .!.!  ;..%%;$.                                $%%%&              .      $.!             %%$&%$%%%%%%%%%%%%*********%****************o!. !         *        ; .                 
      ..   .;;..o***!. .;...o     *!!.. ;                            &%%$&;                %!;;;;!;;            !%%%$%$$$$$%%%%%%%**********%***********%*o!!!!!. ;        !* !     o                   
    .. ;*oooooooo*oo*   .!;!o   !..%$!. $                          %$$%%%                  !;$;;;;* %           $%$$%$$&$$$$%%%%%%%********%***********o!o!!!!!!o          !!                           
    .**ooooooooooooooo*o. .;o    ****%$;%        o##@@%          ;$%%%&                    %%;!%;!   .      .  $%%%%$$%&$$$$&$%%%%%%****%%**************!!!!!!!!!.     !   o!o                          
  .*oooooo*o*%$$%**o%%$$$*o*o  *%&******;       #&######o       $%%%$;                     &***;!;         ;  &%%%%$$$&$%$%$$%%%%%%%%**%**%*%*******o*****!!!!!!!o     .    !!o ;  ;  ;                 
.       .%*            . .;;$ %    ****%.     .**%#@@####%   *$$%%%o          o%           o%**;&&;  .       &%%%%%%$$$$$%%%%%%%%%%******%%********!!!!!o**o!!!!!!.         .!!           ;             
      .o                 .. ..*    ##$;;      **$%$####### .@%%%%$           &&&#          !*%;$;$*;.       &$$%%%%%%$$&$%%%%%%%%%******%%**%*%***o!!!!!!o**o!!!!!*     ;     oo      ;      ;          
     !o                   ;%o**   !!  %o     %!$%%$########%%%%&             &&&#          **!$;;*%;*      $$$$$%%%%%%$$&&&&$$%%%%***%*;;!!!o%***o!!!!!!!!!oo!!!!!!.     !               ;      .       
    ;;                 !%  .  !. .o!  *!     #*%%%$#####@##%%&;              &&&&          *;%;!!%%;%    $$$$$$$%%*%%%%%$$$%%%%%%$&!!oo$%%%!!!!**!!!!!!!!!!!!o!!!!!!  ;   ;     .          .     .      
   !;$              ;;          !.  ;  oo    #&$%$&##&#####&.                &&&&!         ;*%;!;;%;%  o  &$$$$$$%%%**%%%%%%%%%%%%$$%%%%%*%%o!!!*%!!!!!!!!!!!!oo!!!o.      ;                  .         
  .;.              .            ;    $  &    ##&&@ &!o#####!                 &&&&*        .;%%%!;;!;*   ;  &$$$$$%%%%**%%%%%%%%%%%%$%%%%%%*oo!!!!.o!!!!!!!!!!o!!!!!!!  ;    !                           
 .. !            !                    $ $$%*$@####%o ######;                 &&&&%        &$%$!*!;!;.     . $$$$$$%%%****%*%%%%%%%%%$%%%%%%!*!!!o;!.*!!!!!!!!!oo!!!!o  ;o    !   ;                      
 .  *           *                      $ %%%%###### *.####&.                 #&&&*        o%$%!!o;%;     ;  .$$$$$%%******%%%%%%%%%%%%%%%%%!!!!!oo.;;!!!!!!!!!o!o!!!!.  !        .               o      
               !                       .&&%##!#@##*######$$                  #&&&.       .;*o%!!o!!;   .    &$!;;.%%%%%****%%%%%%%%%%%%%%%%o!!!!! !..o!!!!!!!!!o!!!!!*  o!         .                    
   ;           ;                         %    @#@#####&#&%@                  %&##        &;$$%!*;!!*    !%&$$%;;;;;&%%*%%****%%%%%%%%%%%%%%%.!!!!  ..%!!!!!!!!!o!!!!!!. .!         ..                   
   %          ;                         ..$    @$#####@&%#                    !!        &%!*o*;!!%!o  ; %%$$$!;;;;;.%%%%%**%%%%%%%%%%%%%%%%%%;!!!.  .o*!!!!!!!!!oo!!!!!  ;.       ..!        .  ;       
   $          o                          .$     #$$$$$$%%.                             *%o;;!o%!!o;   .  %$$$!.;;..;%%%%%%%%%%%$%%%%%%%%%$%%!*!!*!. .o !!!!!!!!!o!!!!!o  !;       ;.!                   
   *         .                       .;;;! #     .&&&##*        ;                     %;**$;%*!!!;;.     %%$&& ..  .%%%%**%%%%%%$%%****%%*$*!!!o!   o% $!!!!!!!!o!o!!!!. ;!   !  !;.;       .  !        
   .         *               .           & .&                  ###*                  & **%*!!o!!o!;    *  %$$$;..  *%%%%%o!!!o%%%$%%*****%%%*!!!!!!!!! .o!!!!!!!!!o!!!!.  !   ;  o!;;      ;            
   !;        $                .         .  !;o.                !@#                 !  ***;*o;o!o%!$       #%$$$$!;&%%o%*%**!!!!%%%$%%******$%*!!!!!!!!* *!!!!!!!!o!!!!!!  ;      o!;;                   
  .!*        $                ..        o  !!* !                                 o!  $o***o$;%!**!      . %%$$$$$$$%%ooo****!oo%%%%%%******%%%%!!!!!!!o o!!!!!!!!!!!!!!o. .      oo;;     .  ;          
  ;  o       %                  .       o ;!!oo !;                            ;*    *;;;;oo*;;**;*  ..;!  !&%$$$$$$%%*ooo!o**%%%%%%%$******%$**%o!!!!!!  o!!!!!!!!!o!!!!.       .o*;;    .              
 .   $       !                         *  o $!oo.  %o                      **      .;o;;;;;;;;!**         !;%%$$$$$%%o*oo!!o*******%$%*****%******!!!!!; *!!!!!!!!!*!!!!.     ; ;;o;.                   
      &       .             $$$&&      $  !  o!oo*    o%.              !%;       *;;%!#!o%%%%$$;;.%;..;;o!;;&%$$$$$$%o*oo!!!!!!!!!!!!oo%$$%%******%o!!!o %!!!!!!!!!*!!!!.  .  ; ;;*;;    ;              
       $      %                          ;!o*o!;!!oo         ...!!;.           !%*;;$!!!!%;;;;%   ;**ooo;;.;;%%$$$$$%oo*o!!!!!o!!!!!!!!!!!oo*%%******!!% %o!!!!!!o!*!!!!.  o ..;;;o;.      .  .         
        .      ;                    *.;         .;;!*.                       %*oo%;;!!!!%!!o;;$   .o*oo...!.;$%%$$$$%ooo*o!!!!!!!!!!!!!!!!!!!!o**%****oo %ooooo!!!*o!!!!. .;...;;;o;.                   
                .                      ! .;**&**o!;;%;o%$.                $*****oo;o!!!$!!;;;%o   *ooo!  ..;.;%%%$$$%ooooo!!!!!!!!!!!!!!!!!!!!!!!o***%!!!****o*oo%o!!!!!..;!!;;o;;o..      ;  ;         
         ;      .                  .    * %;;;..;;;;!;!*o**$$$*o;  ..!o$%**o****o;;&!!;&!!;..****%oooo.     ;;*%%$$%$ooo!oo!!!!!!!!!!!!!!!!!!!!!!!!!oo**$o***o*%%o!!!!!!;.;!o;;;;;!..                   
                 o                     .$!!      ....$.o***********;;;;;******%%*;;%!.!o*%%*****ooo. ;.      ;;%%%$$%ooo!!oo!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!o%$%****!!!!!!o;;;o;;;;;...     ;  .          
           o     .%             .  *   ;%.         ..;;.o********%;;;o;;;o%**!;**;;!! ;!*%%%%***o;    .      ..$%%%%%*ooo!!o!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!o*****!!!!!o.;;o;;;;;.                     
           ;;      $                .*.&;            .$ !o o%***%;!!*!o*!;;*o*o*%;!!  .!*%%%%**!       ..      .%%%$$%ooo!ooo!oo!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!oo..;o..... . !           ;      
           ;;*     .$            .                       !% %ooo!;;!;;!;*;;;;%*o*;!;   ;*%%***;                .*%%%%*ooooo!!o!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!;..;    .    ;    ..      .;   
           ;.;;     .&.           .   o.              $. %!;;o   %***oo;;.$   .*;;#    ;o*%****.           .  . .%*%%*ooooooo!oo!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!;  ;   .             ;      ! 
           ; ;.&      $            ..!;.              %&  !!*   $;.   ....% $     %    .!%%%***oo            . ..o***%ooo!!o!!oo*o!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  .   !   ;            .     
          .  ;;; !     *               ;             o..  o   ;;;.     ...&   $         !******o*o!            ...%o**ooo!o!!oo!o*oo!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!o  !      !; ;               
          .  .;! oo     ;              %.            !..&    $...      ...$     $  %    ;******oo!!o.           ..;oo*o!!o!!!ooooo*oo!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!;.     .   ;o .              
          ;   ;* !!&     .;             $           $;..o; *.          ...!    !    .    ******!;.o. ;            .ooo!;!!oo!ooo!o**ooo!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!o  !       ;o             . 
          .   ;; !!o&     .;             o         .;..;  .;            ...    $    *    *****!   !! ;              o*!;;!!oo!!!ooo**oo!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!.     .    !               
              ;  !!!!%      %             !        oo*%    #.            ..    .    o    ooo*... .!;  .                 .!!!!o!*    %o*oo!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  !   .    ! ;            
              ;% !!!!!$      *             .o     !o!o%    *.             .*    !  *    * .o..... .!                       .!!o      %**o!!!!!!!!!!!!!!!!!!!!!!!!!!!!!;!!!!!!;.      !    ! !        .  
              ..o.!!!!!&     *;%           ; ;o*;%!!o!.   .%               .           %  ;......  *                        o;*       %ooo!!!!!!!!!!!!!!!!!!!!!!!!!!!!;!!!!!!!*  .    !              . .
               .; !!!!!o#%*%....!          o..;;!!!!%  $ ;o  !.       .     .       ;*    ;... ..  !;                        !!       !o**o!!!!!!!!!!!!!!!!!!!!!!!!!!!;!;!!!!!!   !    .   o .      ;   
               ..$ o!!!!*$ .......%       o....;;!!!;        o.             .  ...           ...    !                        ;$       ;****o!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*  !!    .     o         
               . !% *!!!!%$;.......%    %;.......;!%        $o.            .                        !                        o!;    .;;*****o!!!!!!!!!!!!!!!!!!!!!!!!;;;!!!!!!!o  .;!       ;         ; 
               . !!* *!!!$%$%.......;$*;.;........!         *o;                                                               !!*   .;$*!o**o*o!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!o!o  ;!;         o  .  .  
         .     ; .!!$ .!!!&$%&;;;;;.%&$;......;;;%         .ooo!         .%&                                                  !!!!!ooo!!!!!oooo!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*. o;;       ;          
          .    .  !!;%  ;o!$%%$o;!% .;!o;.;;;!;!%          #ooooooo!!!!oo%%%o                       .                         !!!!!!!!!!!!!!!oooo!!!!!!;;!!!!!!!!!!!!!!!!!!!!!!!!.  ;;......... !  .;   
               .  ;!;;;.  !$&$*;      !!!&!!!!!o           ooooooooooooooo%%%                                                !;!!!!!!!!!!!!!!!!oooo!!!!!!!!!!!!!;!!!!!!!!!!!!!!!!o .!!........!......   
                   !$ .;%             !!!o$!!*!           oooooooooooooooo*%%$                           ....   .           !;;!!!!!!!!!!!!!!!!!o!ooo!!!!!!!!!!!!;!!!!!!!!!!!!!!!%. !!........!!.;..... 
               .   !# .;;o.$.       ; !!!!!o&           .oooooooooooooooooo*%%$                          ...   ..          . !;;!!!!!!!!!!!!!!!!!o!!oo!!!!!!;;!;;;;!!!o!!!!!!!!!!o...!....;..;!!...;;.  
               .   .*  .;  o*%*     o !!!!!o           *!ooooooooooooooooooo*%%%                        !..                   ;;;!!!!!!!!!!!!!!!!!!!!!!!!!!!;o;;oo!!!oo!!!!!!!!!!!o..o....;..;!!!.;  ;  
               .    ;%  .  !oo. ;*o*% !!!%            &oooooooooooooooooo!ooo%%%$;                     !!..      .              !;;!!!!!!!!!!!!!!!!!oo!!!!!;       !!!!!!!!!!!!!!!o..o....!...!!o.!   . 
               .    .!*%$  !!!*;;!$%$ *!%            oooooooooooooooooo!oooooo%%%%%$%.                .!.;.  ..;..               ;;;!!!!!!!!!!!!!!!!!o!!!!!!       .!o!!!!!!!!!!!!!.......!...!!!..   . 
                     !o;!% ;        ;o .           $oooooooooooooooo!!o!oo!oooo*%%%%%%%$*            oo.. !. ..; ..                !;;!!!!!!!!!!!!!!!!!!!!!.       .*!o!!!!!!!!!!!!o..!...o...!!o!.     
                       !!o     ;$$$&&!%          &*ooooooooooo!o!!o!!!!o!o!o!ooo%%o*%%%%%%$*.       o!;.;  ; ..!  .                  ;!;!!!!!!!!!!!!!!!!!!!o       .!!!!!!!!!!!!!!!o..!...;...!!!o.! .  
                       .;;% o  o;;;!%%;*o.     &*****oo!!!!!!!!!!!!!!!!!!!!!!!!o*!!!!!ooo**%;.   o!!!;      . ..                    .  .!;;;;;!;;;;;;;;!!!!!      ..*!!!!!!!!!!!!!!!;.......  !!!! .    
*/

signed main()
{
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
	int T;
	fr(T);
	while(T--)
		[](){
            int n;
            fr(n);
	    }();
	return 0;
}

/*
 _ _         _                        
| | |       | |                       
| | | ___ __| | _____ _ __ _ __ _   _ 
| | |/ / '__| |/ / _ \ '__| '__| | | |
| |   <| |  |   <  __/ |  | |  | |_| |
|_|_|\_\_|  |_|\_\___|_|  |_|   \__, |
                                 __/ |
                                |___/ 
*/ 