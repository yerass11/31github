//
//  FeedCell.swift
//  InstagramTutorial
//
//  Created by Erasyl on 11.11.2023.
//

import SwiftUI

struct FeedCell: View {
    var body: some View {
        VStack {
            // image + username
            HStack {
                Image("Viking")
                    .resizable()
                    .scaledToFill()
                    .frame(width: 40, height: 40)
                    .clipShape(Circle())
                
                Text("vikings")
                    .font(.footnote)
                    .fontWeight(.semibold)
                 
                Spacer()
            }
            .padding(.leading, 8)
            
            // post image
            
            Image("Viking")
                .resizable()
                .scaledToFill()
                .frame(height: 400)
                .clipShape(Rectangle())
            
            
            //action buttons
            HStack {
                Button {
                    print("Like post")
                } label: {
                    Image(systemName: "heart")
                        .imageScale(.large)
                }
                
                Button {
                    print("Comment on post")
                } label: {
                    Image(systemName: "message")
                        .scaleEffect(x: -1, y: 1)
                        .imageScale(.large)
                        
                }
                
                Button {
                     print("Share Post")
                } label: {
                    Image(systemName: "paperplane")
                        .imageScale(.large)
                }
                
                Spacer()
                
                Button {
                     print("Saved")
                } label: {
                    Image(systemName: "bookmark")
                        .imageScale(.large)
                }
                
                
                
            }
            .padding(.leading, 8)
            .padding(.trailing, 8)
            .padding(.top, 4)
            .foregroundColor(.black)
            
            
            // likes label
            Text("1 213 likes")
                .font(.footnote)
                .fontWeight(.semibold)
                .frame(maxWidth: /*@START_MENU_TOKEN@*/.infinity/*@END_MENU_TOKEN@*/, alignment: .leading)
                .padding(.leading, 10)
                .padding(.top, 1)
            
            // caption label
            
            HStack {
                Text("vikings ").fontWeight(.semibold) +
                Text("What are you so afraid of? It's only death!")
            }
            .font(.footnote)
            .padding(.leading, 10)
            .padding(.top, 0.5)
            .frame(maxWidth: /*@START_MENU_TOKEN@*/.infinity/*@END_MENU_TOKEN@*/, alignment: .leading)
            
            Text("34 minutes ago")
                .font(.footnote)
                .frame(maxWidth: /*@START_MENU_TOKEN@*/.infinity/*@END_MENU_TOKEN@*/, alignment: .leading)
                .padding(.leading, 10)
                .padding(.top, 1)
                .foregroundColor(.gray)
        }
    }
}

#Preview {
    FeedCell()
}
