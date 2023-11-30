//
//  UserStatView.swift
//  InstagramTutorial
//
//  Created by Erasyl on 11.11.2023.
//

import SwiftUI

struct UserStatView: View {
    let value: Int
    let title: String
    
    var body: some View {
        VStack {
            Text("\(value)")
                .font(.subheadline)
                .fontWeight(.semibold)
            
            Text(title)
                .font(.footnote)
            
        }
        .frame(width: 80  )
    }
}

#Preview {
    UserStatView(value: 3, title: "Posts")
}
