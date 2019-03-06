// 
//  Font data for Roboto Light 10pt
// 
#include "nrf_font.h"
// 
//  Font data for Roboto 11pt
// 

// Character bitmaps for Roboto 11pt
const uint8_t roboto_11ptBitmaps[] =
{
	// @0 '!' (2 pixels wide)
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   

	// @15 '"' (4 pixels wide)
	0x00, //     
	0xD0, // ## #
	0xD0, // ## #
	0xD0, // ## #
	0xD0, // ## #
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     

	// @30 '#' (9 pixels wide)
	0x00, 0x00, //          
	0x1A, 0x00, //    ## #  
	0x12, 0x00, //    #  #  
	0x12, 0x00, //    #  #  
	0x7F, 0x80, //  ########
	0x7F, 0x80, //  ########
	0x36, 0x00, //   ## ##  
	0x34, 0x00, //   ## #   
	0xFF, 0x00, // ######## 
	0x24, 0x00, //   #  #   
	0x24, 0x00, //   #  #   
	0x6C, 0x00, //  ## ##   
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @60 '$' (7 pixels wide)
	0x10, //    #   
	0x38, //   ###  
	0x7C, //  ##### 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xE0, // ###    
	0x78, //  ####  
	0x1C, //    ### 
	0x06, //      ##
	0xC6, // ##   ##
	0xFE, // #######
	0x7C, //  ##### 
	0x10, //    #   
	0x10, //    #   
	0x00, //        

	// @75 '%' (9 pixels wide)
	0x00, 0x00, //          
	0x60, 0x00, //  ##      
	0xF2, 0x00, // ####  #  
	0x93, 0x00, // #  #  ## 
	0x96, 0x00, // #  # ##  
	0xF4, 0x00, // #### #   
	0x08, 0x00, //     #    
	0x1B, 0x00, //    ## ## 
	0x16, 0x80, //    # ## #
	0x24, 0x80, //   #  #  #
	0x64, 0x80, //  ##  #  #
	0x07, 0x80, //      ####
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @105 '&' (9 pixels wide)
	0x00, 0x00, //          
	0x38, 0x00, //   ###    
	0x7C, 0x00, //  #####   
	0xCC, 0x00, // ##  ##   
	0xCC, 0x00, // ##  ##   
	0x78, 0x00, //  ####    
	0x70, 0x00, //  ###     
	0xFB, 0x00, // ##### ## 
	0xDF, 0x00, // ## ##### 
	0xCE, 0x00, // ##  ###  
	0xFE, 0x00, // #######  
	0x7F, 0x80, //  ########
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @135 ''' (2 pixels wide)
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   

	// @150 '(' (4 pixels wide)
	0x10, //    #
	0x30, //   ##
	0x60, //  ## 
	0x40, //  #  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0x40, //  #  
	0x60, //  ## 
	0x20, //   # 
	0x30, //   ##

	// @165 ')' (4 pixels wide)
	0x80, // #   
	0x40, //  #  
	0x60, //  ## 
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x10, //    #
	0x10, //    #
	0x10, //    #
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x20, //   # 
	0x60, //  ## 
	0xC0, // ##  

	// @180 '*' (7 pixels wide)
	0x00, //        
	0x10, //    #   
	0x10, //    #   
	0xD4, // ## # # 
	0x7E, //  ######
	0x38, //   ###  
	0x6C, //  ## ## 
	0x48, //  #  #  
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        

	// @195 '+' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x18, //    ##   
	0x18, //    ##   
	0x18, //    ##   
	0xFF, // ########
	0xFF, // ########
	0x18, //    ##   
	0x18, //    ##   
	0x18, //    ##   
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @210 ',' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x40, //  # 
	0xC0, // ## 

	// @225 '-' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0xF0, // ####
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     

	// @240 '.' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   

	// @255 '/' (5 pixels wide)
	0x00, //      
	0x08, //     #
	0x18, //    ##
	0x18, //    ##
	0x10, //    # 
	0x30, //   ## 
	0x30, //   ## 
	0x20, //   #  
	0x60, //  ##  
	0x60, //  ##  
	0x40, //  #   
	0xC0, // ##   
	0xC0, // ##   
	0x00, //      
	0x00, //      

	// @270 '0' (7 pixels wide)
	0x00, //        
	0x38, //   ###  
	0x7C, //  ##### 
	0xCE, // ##  ###
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xFC, // ###### 
	0x78, //  ####  
	0x00, //        
	0x00, //        
	0x00, //        

	// @285 '1' (5 pixels wide)
	0x00, //      
	0x08, //     #
	0x78, //  ####
	0xF8, // #####
	0x98, // #  ##
	0x18, //    ##
	0x18, //    ##
	0x18, //    ##
	0x18, //    ##
	0x18, //    ##
	0x18, //    ##
	0x18, //    ##
	0x00, //      
	0x00, //      
	0x00, //      

	// @300 '2' (7 pixels wide)
	0x00, //        
	0x38, //   ###  
	0xFC, // ###### 
	0xCE, // ##  ###
	0xC6, // ##   ##
	0x0C, //     ## 
	0x0C, //     ## 
	0x18, //    ##  
	0x30, //   ##   
	0x60, //  ##    
	0xFE, // #######
	0xFE, // #######
	0x00, //        
	0x00, //        
	0x00, //        

	// @315 '3' (8 pixels wide)
	0x00, //         
	0x3C, //   ####  
	0x7E, //  ###### 
	0x67, //  ##  ###
	0x03, //       ##
	0x06, //      ## 
	0x1C, //    ###  
	0x06, //      ## 
	0x03, //       ##
	0xE3, // ###   ##
	0x7F, //  #######
	0x3E, //   ##### 
	0x00, //         
	0x00, //         
	0x00, //         

	// @330 '4' (8 pixels wide)
	0x00, //         
	0x06, //      ## 
	0x0E, //     ### 
	0x1E, //    #### 
	0x1E, //    #### 
	0x36, //   ## ## 
	0x26, //   #  ## 
	0x66, //  ##  ## 
	0xFF, // ########
	0xFF, // ########
	0x06, //      ## 
	0x06, //      ## 
	0x00, //         
	0x00, //         
	0x00, //         

	// @345 '5' (7 pixels wide)
	0x00, //        
	0x7E, //  ######
	0x7E, //  ######
	0xC0, // ##     
	0xC0, // ##     
	0xFC, // ###### 
	0xFE, // #######
	0x06, //      ##
	0x06, //      ##
	0xC6, // ##   ##
	0xFE, // #######
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @360 '6' (7 pixels wide)
	0x00, //        
	0x18, //    ##  
	0x38, //   ###  
	0x60, //  ##    
	0xC0, // ##     
	0xFC, // ###### 
	0xFE, // #######
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xFE, // #######
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @375 '7' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0x03, //       ##
	0x06, //      ## 
	0x06, //      ## 
	0x0C, //     ##  
	0x0C, //     ##  
	0x18, //    ##   
	0x18, //    ##   
	0x38, //   ###   
	0x30, //   ##    
	0x00, //         
	0x00, //         
	0x00, //         

	// @390 '8' (7 pixels wide)
	0x00, //        
	0x38, //   ###  
	0xFC, // ###### 
	0xCE, // ##  ###
	0xC6, // ##   ##
	0xEC, // ### ## 
	0x78, //  ####  
	0xEC, // ### ## 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xFE, // #######
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @405 '9' (7 pixels wide)
	0x00, //        
	0x38, //   ###  
	0xFC, // ###### 
	0xCC, // ##  ## 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xCE, // ##  ###
	0xFE, // #######
	0x26, //   #  ##
	0x0C, //     ## 
	0x78, //  ####  
	0x70, //  ###   
	0x00, //        
	0x00, //        
	0x00, //        

	// @420 ':' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   

	// @435 ';' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x60, //  ##
	0x60, //  ##
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x40, //  # 
	0xC0, // ## 

	// @450 '<' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x06, //      ##
	0x1E, //    ####
	0x78, //  ####  
	0xE0, // ###    
	0x78, //  ####  
	0x1E, //    ####
	0x02, //       #
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        

	// @465 '=' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xFE, // #######
	0xFE, // #######
	0x00, //        
	0xFE, // #######
	0xFE, // #######
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        

	// @480 '>' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x80, // #     
	0xF0, // ####  
	0x7C, //  #####
	0x0C, //     ##
	0x7C, //  #####
	0xE0, // ###   
	0x80, // #     
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @495 '?' (7 pixels wide)
	0x00, //        
	0x38, //   ###  
	0x7E, //  ######
	0xE6, // ###  ##
	0x06, //      ##
	0x0C, //     ## 
	0x1C, //    ### 
	0x18, //    ##  
	0x10, //    #   
	0x00, //        
	0x38, //   ###  
	0x38, //   ###  
	0x00, //        
	0x00, //        
	0x00, //        

	// @510 '@' (12 pixels wide)
	0x00, 0x00, //             
	0x00, 0x00, //             
	0x1F, 0x80, //    ######   
	0x30, 0x40, //   ##     #  
	0x40, 0x20, //  #        # 
	0xCF, 0x30, // ##  ####  ##
	0x89, 0x30, // #   #  #  ##
	0x99, 0x30, // #  ##  #  ##
	0x91, 0x30, // #  #   #  ##
	0x91, 0x30, // #  #   #  ##
	0x9B, 0x20, // #  ## ##  # 
	0x9D, 0xC0, // #  ### ###  
	0xC0, 0x00, // ##          
	0x60, 0x00, //  ##         
	0x3F, 0x00, //   ######    

	// @540 'A' (10 pixels wide)
	0x00, 0x00, //           
	0x0C, 0x00, //     ##    
	0x0E, 0x00, //     ###   
	0x1E, 0x00, //    ####   
	0x1E, 0x00, //    ####   
	0x3B, 0x00, //   ### ##  
	0x33, 0x00, //   ##  ##  
	0x33, 0x00, //   ##  ##  
	0x7F, 0x80, //  ######## 
	0x7F, 0x80, //  ######## 
	0x61, 0x80, //  ##    ## 
	0xE0, 0xC0, // ###     ##
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @570 'B' (8 pixels wide)
	0x00, //         
	0xF8, // #####   
	0xFE, // ####### 
	0xC7, // ##   ###
	0xC7, // ##   ###
	0xC6, // ##   ## 
	0xFC, // ######  
	0xC7, // ##   ###
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFE, // ####### 
	0xFC, // ######  
	0x00, //         
	0x00, //         
	0x00, //         

	// @585 'C' (8 pixels wide)
	0x00, //         
	0x3C, //   ####  
	0x7E, //  ###### 
	0xE3, // ###   ##
	0xC3, // ##    ##
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC3, // ##    ##
	0xC3, // ##    ##
	0x7F, //  #######
	0x3E, //   ##### 
	0x00, //         
	0x00, //         
	0x00, //         

	// @600 'D' (8 pixels wide)
	0x00, //         
	0xF8, // #####   
	0xFC, // ######  
	0xC6, // ##   ## 
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC7, // ##   ###
	0xFE, // ####### 
	0xF8, // #####   
	0x00, //         
	0x00, //         
	0x00, //         

	// @615 'E' (7 pixels wide)
	0x00, //        
	0xFE, // #######
	0xFE, // #######
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xFC, // ###### 
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xFE, // #######
	0xFE, // #######
	0x00, //        
	0x00, //        
	0x00, //        

	// @630 'F' (7 pixels wide)
	0x00, //        
	0xFE, // #######
	0xFE, // #######
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xFC, // ###### 
	0xFC, // ###### 
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0x00, //        
	0x00, //        
	0x00, //        

	// @645 'G' (8 pixels wide)
	0x00, //         
	0x3C, //   ####  
	0x7F, //  #######
	0xE3, // ###   ##
	0xC3, // ##    ##
	0xC0, // ##      
	0xCF, // ##  ####
	0xCF, // ##  ####
	0xC3, // ##    ##
	0xE3, // ###   ##
	0x7F, //  #######
	0x3E, //   ##### 
	0x00, //         
	0x00, //         
	0x00, //         

	// @660 'H' (9 pixels wide)
	0x00, 0x00, //          
	0xC3, 0x80, // ##    ###
	0xC3, 0x80, // ##    ###
	0xC3, 0x80, // ##    ###
	0xC3, 0x80, // ##    ###
	0xC3, 0x80, // ##    ###
	0xFF, 0x80, // #########
	0xC3, 0x80, // ##    ###
	0xC3, 0x80, // ##    ###
	0xC3, 0x80, // ##    ###
	0xC3, 0x80, // ##    ###
	0xC3, 0x80, // ##    ###
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @690 'I' (2 pixels wide)
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   

	// @705 'J' (7 pixels wide)
	0x00, //        
	0x06, //      ##
	0x06, //      ##
	0x06, //      ##
	0x06, //      ##
	0x06, //      ##
	0x06, //      ##
	0x06, //      ##
	0x06, //      ##
	0xE6, // ###  ##
	0x7E, //  ######
	0x3C, //   #### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @720 'K' (9 pixels wide)
	0x00, 0x00, //          
	0xC3, 0x80, // ##    ###
	0xC7, 0x00, // ##   ### 
	0xCE, 0x00, // ##  ###  
	0xDC, 0x00, // ## ###   
	0xD8, 0x00, // ## ##    
	0xF8, 0x00, // #####    
	0xFC, 0x00, // ######   
	0xEC, 0x00, // ### ##   
	0xCE, 0x00, // ##  ###  
	0xC7, 0x00, // ##   ### 
	0xC3, 0x80, // ##    ###
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @750 'L' (7 pixels wide)
	0x00, //        
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xFE, // #######
	0xFE, // #######
	0x00, //        
	0x00, //        
	0x00, //        

	// @765 'M' (11 pixels wide)
	0x00, 0x00, //            
	0xE0, 0xE0, // ###     ###
	0xE0, 0xE0, // ###     ###
	0xF0, 0xE0, // ####    ###
	0xF1, 0xE0, // ####   ####
	0xF1, 0xE0, // ####   ####
	0xDB, 0x60, // ## ## ## ##
	0xDB, 0x60, // ## ## ## ##
	0xCB, 0x60, // ##  # ## ##
	0xCE, 0x60, // ##  ###  ##
	0xCE, 0x60, // ##  ###  ##
	0xC4, 0x60, // ##   #   ##
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x00, 0x00, //            

	// @795 'N' (9 pixels wide)
	0x00, 0x00, //          
	0xC3, 0x80, // ##    ###
	0xE3, 0x80, // ###   ###
	0xE3, 0x80, // ###   ###
	0xF3, 0x80, // ####  ###
	0xFB, 0x80, // ##### ###
	0xDB, 0x80, // ## ## ###
	0xCF, 0x80, // ##  #####
	0xCF, 0x80, // ##  #####
	0xC7, 0x80, // ##   ####
	0xC3, 0x80, // ##    ###
	0xC3, 0x80, // ##    ###
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @825 'O' (9 pixels wide)
	0x00, 0x00, //          
	0x3C, 0x00, //   ####   
	0x7E, 0x00, //  ######  
	0xE3, 0x00, // ###   ## 
	0xC3, 0x00, // ##    ## 
	0xC3, 0x80, // ##    ###
	0xC3, 0x80, // ##    ###
	0xC3, 0x80, // ##    ###
	0xC3, 0x80, // ##    ###
	0xE3, 0x00, // ###   ## 
	0x7F, 0x00, //  ####### 
	0x3E, 0x00, //   #####  
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @855 'P' (8 pixels wide)
	0x00, //         
	0xFC, // ######  
	0xFE, // ####### 
	0xC7, // ##   ###
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFF, // ########
	0xFE, // ####### 
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0xC0, // ##      
	0x00, //         
	0x00, //         
	0x00, //         

	// @870 'Q' (9 pixels wide)
	0x00, 0x00, //          
	0x3C, 0x00, //   ####   
	0x7E, 0x00, //  ######  
	0xE3, 0x00, // ###   ## 
	0xC3, 0x00, // ##    ## 
	0xC3, 0x80, // ##    ###
	0xC3, 0x80, // ##    ###
	0xC3, 0x80, // ##    ###
	0xC3, 0x80, // ##    ###
	0xC3, 0x00, // ##    ## 
	0x7F, 0x00, //  ####### 
	0x3E, 0x00, //   #####  
	0x03, 0x00, //       ## 
	0x01, 0x80, //        ##
	0x00, 0x00, //          

	// @900 'R' (8 pixels wide)
	0x00, //         
	0xF8, // #####   
	0xFE, // ####### 
	0xC7, // ##   ###
	0xC3, // ##    ##
	0xC7, // ##   ###
	0xFE, // ####### 
	0xFC, // ######  
	0xCC, // ##  ##  
	0xC6, // ##   ## 
	0xC7, // ##   ###
	0xC3, // ##    ##
	0x00, //         
	0x00, //         
	0x00, //         

	// @915 'S' (9 pixels wide)
	0x00, 0x00, //          
	0x1E, 0x00, //    ####  
	0x7F, 0x00, //  ####### 
	0x63, 0x80, //  ##   ###
	0x60, 0x00, //  ##      
	0x70, 0x00, //  ###     
	0x3E, 0x00, //   #####  
	0x0F, 0x00, //     #### 
	0x03, 0x80, //       ###
	0xE3, 0x80, // ###   ###
	0x7F, 0x00, //  ####### 
	0x3E, 0x00, //   #####  
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @945 'T' (9 pixels wide)
	0x00, 0x00, //          
	0xFF, 0x80, // #########
	0xFF, 0x80, // #########
	0x0C, 0x00, //     ##   
	0x0C, 0x00, //     ##   
	0x0C, 0x00, //     ##   
	0x0C, 0x00, //     ##   
	0x0C, 0x00, //     ##   
	0x0C, 0x00, //     ##   
	0x0C, 0x00, //     ##   
	0x0C, 0x00, //     ##   
	0x0C, 0x00, //     ##   
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @975 'U' (8 pixels wide)
	0x00, //         
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xC3, // ##    ##
	0xFE, // ####### 
	0x7C, //  #####  
	0x00, //         
	0x00, //         
	0x00, //         

	// @990 'V' (10 pixels wide)
	0x00, 0x00, //           
	0xE1, 0xC0, // ###    ###
	0xE1, 0x80, // ###    ## 
	0x61, 0x80, //  ##    ## 
	0x63, 0x80, //  ##   ### 
	0x73, 0x00, //  ###  ##  
	0x33, 0x00, //   ##  ##  
	0x37, 0x00, //   ## ###  
	0x1E, 0x00, //    ####   
	0x1E, 0x00, //    ####   
	0x1E, 0x00, //    ####   
	0x0C, 0x00, //     ##    
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @1020 'W' (13 pixels wide)
	0x00, 0x00, //              
	0xC3, 0x18, // ##    ##   ##
	0x67, 0x38, //  ##  ###  ###
	0x67, 0x30, //  ##  ###  ## 
	0x67, 0x30, //  ##  ###  ## 
	0x65, 0x30, //  ##  # #  ## 
	0x6D, 0xB0, //  ## ## ## ## 
	0x3D, 0xB0, //   #### ## ## 
	0x3D, 0xE0, //   #### ####  
	0x38, 0xE0, //   ###   ###  
	0x38, 0xE0, //   ###   ###  
	0x18, 0xE0, //    ##   ###  
	0x00, 0x00, //              
	0x00, 0x00, //              
	0x00, 0x00, //              

	// @1050 'X' (9 pixels wide)
	0x00, 0x00, //          
	0xE1, 0x80, // ###    ##
	0x63, 0x80, //  ##   ###
	0x33, 0x00, //   ##  ## 
	0x36, 0x00, //   ## ##  
	0x1E, 0x00, //    ####  
	0x1C, 0x00, //    ###   
	0x1E, 0x00, //    ####  
	0x3E, 0x00, //   #####  
	0x37, 0x00, //   ## ### 
	0x73, 0x00, //  ###  ## 
	0xE1, 0x80, // ###    ##
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @1080 'Y' (9 pixels wide)
	0x00, 0x00, //          
	0xE1, 0x80, // ###    ##
	0x63, 0x80, //  ##   ###
	0x63, 0x00, //  ##   ## 
	0x37, 0x00, //   ## ### 
	0x36, 0x00, //   ## ##  
	0x1E, 0x00, //    ####  
	0x1C, 0x00, //    ###   
	0x0C, 0x00, //     ##   
	0x0C, 0x00, //     ##   
	0x0C, 0x00, //     ##   
	0x0C, 0x00, //     ##   
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @1110 'Z' (8 pixels wide)
	0x00, //         
	0xFF, // ########
	0xFF, // ########
	0x06, //      ## 
	0x0C, //     ##  
	0x1C, //    ###  
	0x38, //   ###   
	0x30, //   ##    
	0x60, //  ##     
	0xE0, // ###     
	0xFF, // ########
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         

	// @1125 '[' (3 pixels wide)
	0xE0, // ###
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xE0, // ###
	0x00, //    

	// @1140 '\' (7 pixels wide)
	0x00, //        
	0xC0, // ##     
	0xE0, // ###    
	0x60, //  ##    
	0x60, //  ##    
	0x30, //   ##   
	0x30, //   ##   
	0x38, //   ###  
	0x18, //    ##  
	0x18, //    ##  
	0x0C, //     ## 
	0x0C, //     ## 
	0x0E, //     ###
	0x00, //        
	0x00, //        

	// @1155 ']' (3 pixels wide)
	0xE0, // ###
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0xE0, // ###
	0x00, //    

	// @1170 '^' (6 pixels wide)
	0x00, //       
	0x30, //   ##  
	0x38, //   ### 
	0x38, //   ### 
	0x68, //  ## # 
	0x4C, //  #  ##
	0xC4, // ##   #
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @1185 '_' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xFE, // #######
	0xFE, // #######
	0x00, //        

	// @1200 '`' (4 pixels wide)
	0x00, //     
	0xE0, // ### 
	0x30, //   ##
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     

	// @1215 'a' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x3C, //   ####  
	0x7E, //  ###### 
	0x06, //      ## 
	0x3E, //   ##### 
	0x66, //  ##  ## 
	0x66, //  ##  ## 
	0xEE, // ### ### 
	0x7F, //  #######
	0x00, //         
	0x00, //         
	0x00, //         

	// @1230 'b' (7 pixels wide)
	0x00, //        
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xFC, // ###### 
	0xFC, // ###### 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xFC, // ###### 
	0xFC, // ###### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @1245 'c' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x3C, //   #### 
	0x7E, //  ######
	0x66, //  ##  ##
	0x60, //  ##    
	0xE0, // ###    
	0x66, //  ##  ##
	0x7E, //  ######
	0x3C, //   #### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @1260 'd' (8 pixels wide)
	0x00, //         
	0x07, //      ###
	0x07, //      ###
	0x07, //      ###
	0x3F, //   ######
	0x7F, //  #######
	0x67, //  ##  ###
	0x67, //  ##  ###
	0xE7, // ###  ###
	0x67, //  ##  ###
	0x7F, //  #######
	0x3B, //   ### ##
	0x00, //         
	0x00, //         
	0x00, //         

	// @1275 'e' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x78, //  ####  
	0xFC, // ###### 
	0xC6, // ##   ##
	0xFE, // #######
	0xFE, // #######
	0xC0, // ##     
	0xFC, // ###### 
	0x7E, //  ######
	0x00, //        
	0x00, //        
	0x00, //        

	// @1290 'f' (5 pixels wide)
	0x00, //      
	0x38, //   ###
	0x70, //  ### 
	0x70, //  ### 
	0xF8, // #####
	0xF8, // #####
	0x70, //  ### 
	0x70, //  ### 
	0x70, //  ### 
	0x70, //  ### 
	0x70, //  ### 
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @1305 'g' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x3B, //   ### ##
	0x7F, //  #######
	0x63, //  ##   ##
	0x63, //  ##   ##
	0xE3, // ###   ##
	0x63, //  ##   ##
	0x7F, //  #######
	0x3B, //   ### ##
	0x03, //       ##
	0x7E, //  ###### 
	0x3C, //   ####  

	// @1320 'h' (7 pixels wide)
	0x00, //        
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xFC, // ###### 
	0xFC, // ###### 
	0xCE, // ##  ###
	0xCE, // ##  ###
	0xCE, // ##  ###
	0xCE, // ##  ###
	0xCE, // ##  ###
	0xCE, // ##  ###
	0x00, //        
	0x00, //        
	0x00, //        

	// @1335 'i' (2 pixels wide)
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   

	// @1350 'j' (4 pixels wide)
	0x00, //     
	0x30, //   ##
	0x30, //   ##
	0x00, //     
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0x30, //   ##
	0xF0, // ####
	0xE0, // ### 

	// @1365 'k' (7 pixels wide)
	0x00, //        
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     
	0xCE, // ##  ###
	0xDC, // ## ### 
	0xF8, // #####  
	0xF0, // ####   
	0xF8, // #####  
	0xD8, // ## ##  
	0xCC, // ##  ## 
	0xCE, // ##  ###
	0x00, //        
	0x00, //        
	0x00, //        

	// @1380 'l' (2 pixels wide)
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   

	// @1395 'm' (11 pixels wide)
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x00, 0x00, //            
	0xFD, 0xC0, // ###### ### 
	0xFF, 0xE0, // ###########
	0xCE, 0x60, // ##  ###  ##
	0xCE, 0x60, // ##  ###  ##
	0xCE, 0x60, // ##  ###  ##
	0xCE, 0x60, // ##  ###  ##
	0xCE, 0x60, // ##  ###  ##
	0xCE, 0x60, // ##  ###  ##
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x00, 0x00, //            

	// @1425 'n' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xFC, // ###### 
	0xFC, // ###### 
	0xCE, // ##  ###
	0xCE, // ##  ###
	0xCE, // ##  ###
	0xCE, // ##  ###
	0xCE, // ##  ###
	0xCE, // ##  ###
	0x00, //        
	0x00, //        
	0x00, //        

	// @1440 'o' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x3C, //   ####  
	0x7E, //  ###### 
	0x63, //  ##   ##
	0x63, //  ##   ##
	0xE3, // ###   ##
	0x63, //  ##   ##
	0x7E, //  ###### 
	0x3C, //   ####  
	0x00, //         
	0x00, //         
	0x00, //         

	// @1455 'p' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xFC, // ###### 
	0xFC, // ###### 
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xC6, // ##   ##
	0xFC, // ###### 
	0xFC, // ###### 
	0xC0, // ##     
	0xC0, // ##     
	0xC0, // ##     

	// @1470 'q' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x3B, //   ### ##
	0x7F, //  #######
	0x67, //  ##  ###
	0xE7, // ###  ###
	0xE7, // ###  ###
	0x67, //  ##  ###
	0x7F, //  #######
	0x3F, //   ######
	0x07, //      ###
	0x07, //      ###
	0x07, //      ###

	// @1485 'r' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0xF0, // ####
	0xF0, // ####
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0x00, //     
	0x00, //     
	0x00, //     

	// @1500 's' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x3C, //   #### 
	0x6E, //  ## ###
	0x60, //  ##    
	0x78, //  ####  
	0x3E, //   #####
	0xC6, // ##   ##
	0x66, //  ##  ##
	0x3C, //   #### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @1515 't' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x60, //  ##  
	0x60, //  ##  
	0xF8, // #####
	0xF8, // #####
	0x60, //  ##  
	0x60, //  ##  
	0x60, //  ##  
	0x60, //  ##  
	0x78, //  ####
	0x38, //   ###
	0x00, //      
	0x00, //      
	0x00, //      

	// @1530 'u' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xCE, // ##  ###
	0xCE, // ##  ###
	0xCE, // ##  ###
	0xCE, // ##  ###
	0xCE, // ##  ###
	0xCE, // ##  ###
	0xFE, // #######
	0x76, //  ### ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @1545 'v' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xC6, // ##   ##
	0x66, //  ##  ##
	0x66, //  ##  ##
	0x6C, //  ## ## 
	0x3C, //   #### 
	0x3C, //   #### 
	0x38, //   ###  
	0x18, //    ##  
	0x00, //        
	0x00, //        
	0x00, //        

	// @1560 'w' (11 pixels wide)
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x00, 0x00, //            
	0xC4, 0x60, // ##   #   ##
	0x6E, 0xC0, //  ## ### ## 
	0x6E, 0xC0, //  ## ### ## 
	0x6A, 0xC0, //  ## # # ## 
	0x7B, 0xC0, //  #### #### 
	0x3B, 0x80, //   ### ###  
	0x31, 0x80, //   ##   ##  
	0x31, 0x80, //   ##   ##  
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x00, 0x00, //            

	// @1590 'x' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xE6, // ###  ## 
	0x6E, //  ## ### 
	0x3C, //   ####  
	0x38, //   ###   
	0x38, //   ###   
	0x3C, //   ####  
	0x6E, //  ## ### 
	0xE7, // ###  ###
	0x00, //         
	0x00, //         
	0x00, //         

	// @1605 'y' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xC7, // ##   ###
	0x66, //  ##  ## 
	0x66, //  ##  ## 
	0x6C, //  ## ##  
	0x3C, //   ####  
	0x3C, //   ####  
	0x38, //   ###   
	0x18, //    ##   
	0x18, //    ##   
	0x70, //  ###    
	0x70, //  ###    

	// @1620 'z' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0xFC, // ######
	0xFC, // ######
	0x18, //    ## 
	0x30, //   ##  
	0x70, //  ###  
	0xE0, // ###   
	0xFC, // ######
	0xFC, // ######
	0x00, //       
	0x00, //       
	0x00, //       

	// @1635 '{' (5 pixels wide)
	0x10, //    # 
	0x38, //   ###
	0x30, //   ## 
	0x30, //   ## 
	0x30, //   ## 
	0x30, //   ## 
	0x60, //  ##  
	0xC0, // ##   
	0x60, //  ##  
	0x30, //   ## 
	0x30, //   ## 
	0x30, //   ## 
	0x30, //   ## 
	0x38, //   ###
	0x10, //    # 

	// @1650 '|' (2 pixels wide)
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   

	// @1665 '}' (5 pixels wide)
	0x80, // #    
	0xE0, // ###  
	0x60, //  ##  
	0x60, //  ##  
	0x60, //  ##  
	0x60, //  ##  
	0x30, //   ## 
	0x18, //    ##
	0x30, //   ## 
	0x60, //  ##  
	0x60, //  ##  
	0x60, //  ##  
	0x60, //  ##  
	0xE0, // ###  
	0x80, // #    

	// @1680 '~' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x73, //  ###  ##
	0xFB, // ##### ##
	0x8E, // #   ### 
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
};

// Character descriptors for Roboto 11pt
// { [Char width in bits], [Offset into roboto_11ptCharBitmaps in bytes] }
const FONT_CHAR_INFO roboto_11ptDescriptors[] =
{
	{2, 0}, 		// ! 
	{4, 15}, 		// " 
	{9, 30}, 		// # 
	{7, 60}, 		// $ 
	{9, 75}, 		// % 
	{9, 105}, 		// & 
	{2, 135}, 		// ' 
	{4, 150}, 		// ( 
	{4, 165}, 		// ) 
	{7, 180}, 		// * 
	{8, 195}, 		// + 
	{3, 210}, 		// , 
	{4, 225}, 		// - 
	{2, 240}, 		// . 
	{5, 255}, 		// / 
	{7, 270}, 		// 0 
	{5, 285}, 		// 1 
	{7, 300}, 		// 2 
	{8, 315}, 		// 3 
	{8, 330}, 		// 4 
	{7, 345}, 		// 5 
	{7, 360}, 		// 6 
	{8, 375}, 		// 7 
	{7, 390}, 		// 8 
	{7, 405}, 		// 9 
	{2, 420}, 		// : 
	{3, 435}, 		// ; 
	{7, 450}, 		// < 
	{7, 465}, 		// = 
	{6, 480}, 		// > 
	{7, 495}, 		// ? 
	{12, 510}, 		// @ 
	{10, 540}, 		// A 
	{8, 570}, 		// B 
	{8, 585}, 		// C 
	{8, 600}, 		// D 
	{7, 615}, 		// E 
	{7, 630}, 		// F 
	{8, 645}, 		// G 
	{9, 660}, 		// H 
	{2, 690}, 		// I 
	{7, 705}, 		// J 
	{9, 720}, 		// K 
	{7, 750}, 		// L 
	{11, 765}, 		// M 
	{9, 795}, 		// N 
	{9, 825}, 		// O 
	{8, 855}, 		// P 
	{9, 870}, 		// Q 
	{8, 900}, 		// R 
	{9, 915}, 		// S 
	{9, 945}, 		// T 
	{8, 975}, 		// U 
	{10, 990}, 		// V 
	{13, 1020}, 		// W 
	{9, 1050}, 		// X 
	{9, 1080}, 		// Y 
	{8, 1110}, 		// Z 
	{3, 1125}, 		// [ 
	{7, 1140}, 		// \ 
	{3, 1155}, 		// ] 
	{6, 1170}, 		// ^ 
	{7, 1185}, 		// _ 
	{4, 1200}, 		// ` 
	{8, 1215}, 		// a 
	{7, 1230}, 		// b 
	{7, 1245}, 		// c 
	{8, 1260}, 		// d 
	{7, 1275}, 		// e 
	{5, 1290}, 		// f 
	{8, 1305}, 		// g 
	{7, 1320}, 		// h 
	{2, 1335}, 		// i 
	{4, 1350}, 		// j 
	{7, 1365}, 		// k 
	{2, 1380}, 		// l 
	{11, 1395}, 	// m 
	{7, 1425}, 		// n 
	{8, 1440}, 		// o 
	{7, 1455}, 		// p 
	{8, 1470}, 		// q 
	{4, 1485}, 		// r 
	{7, 1500}, 		// s 
	{5, 1515}, 		// t 
	{7, 1530}, 		// u 
	{7, 1545}, 		// v 
	{11, 1560}, 	// w 
	{8, 1590}, 		// x 
	{8, 1605}, 		// y 
	{6, 1620}, 		// z 
	{5, 1635}, 		// { 
	{2, 1650}, 		// | 
	{5, 1665}, 		// } 
	{8, 1680}, 		// ~ 
};

// Font information for Roboto 11pt
const FONT_INFO roboto_11ptFontInfo =
{
	15, //  Character height
	'!', //  Start character
	'~', //  End character
	2, //  Width, in pixels, of space character
	roboto_11ptDescriptors, //  Character descriptor array
	roboto_11ptBitmaps, //  Character bitmap array
};

